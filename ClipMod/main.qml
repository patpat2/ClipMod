import QtQuick 2.9
import QtQuick.Controls 2.2

import clipmod.mod_simplify 1.0

ApplicationWindow {
    visible: true
    width: 280
    height: 300
    title: qsTr("ClipMod")

    // Mods:
    ModSimplify{
        id: simply
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
                    switch (mod) {
                    case "regexp":
                        console.exception("Not yet implemented: regexp!");
                        break;
                    case "spell_check":
                        console.exception("Not yet implemented: spell_check!");
                        break;
                    case "clear_font":
                        console.exception("Not yet implemented: clear_font!");
                        break;
                    case "simplify":
                        console.log("simplify!");
                        console.log("result: \"" + simply.apply() + "\"")
                        break;
                }
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
