import QtQuick 2.9
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Scroll")

    ScrollView {
        anchors.fill: parent

        ListView {
            width: parent.width
            model: possibleModifiers
            delegate: ItemDelegate {
                text: qsTr("Modifier: ") + name
                width: parent.width
            }
        }
    }

    ListModel {
        id: possibleModifiers
         ListElement {
             name: qsTr("RegExp Edit")
             desc: qsTr("take a sub string matching by reg exp")
         }
         ListElement {
             name: qsTr("Spell checker")
             desc: qsTr("run the spell checker, and apply the 1st approach")
         }
         ListElement {
             name: qsTr("Clear font")
             desc: qsTr("convert rich text to plain")
         }
         ListElement {
             name: qsTr("Simpify whitespace")
             desc: qsTr("QString::simplified()")
         }
     }
}
