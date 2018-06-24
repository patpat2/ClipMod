import QtQuick 2.9
import QtQuick.Controls 2.2

import clipmod.clipboard_modifier 1.0

ApplicationWindow {
    visible: true
    width: 280
    height: 300
    title: qsTr("ClipMod")

    // Mods:
    ClipboardModifier {
        id: cm
    }

    ScrollView {
        anchors.fill: parent

        ListView {
            width: parent.width
            model: possibleModifiers
            delegate: ItemDelegate {
                text: qsTr("Modifier: ") + name
                width: parent.width
                onClicked: {
                    var mods = new Array;
                    switch (mod) {
                    case "regexp":
                        mods.push(0);
                        break;
                    case "spell_check":
                        mods.push(1);
                        break;
                    case "clear_font":
                        mods.push(2);
                        break;
                    case "simplify":
                        mods.push(3);
                        break;
                }
                // TODO: Pass the hole list
                cm.runModification(mods.pop());
            }
        }
    }

    ListModel {
        id: possibleModifiers
         ListElement {
             mod: "regexp"
             name: qsTr("RegExp Edit")
             desc: qsTr("take a sub string matching by reg exp")
         }
         ListElement {
             mod: "spell_check"
             name: qsTr("Spell checker")
             desc: qsTr("run the spell checker, and apply the 1st approach")
         }
         ListElement {
             mod: "clear_font"
             name: qsTr("Clear font")
             desc: qsTr("convert rich text to plain")
         }
         ListElement {
             mod: "simplify"
             name: qsTr("Simplify")
             desc: qsTr("QString::simplified()")

         }
     }
}}
