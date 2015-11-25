import QtQuick 2.3
import QtQuick 2.0
import QtQuick.Window 2.2

Window {
    id: window1
    visible: true

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        Column {
            spacing: 10

            Text {
                text: "Enter a value from 0 to 2000"
            }
            TextInput {
                focus: true
                validator: IntValidator { bottom:0; top: 2000}
            }
        }
        TextInput {
            id: textInput2
            x: 155
            y: 252
            width: 80
            height: 20
            text: qsTr("Text Input")
            font.bold: true
            font.pixelSize: 12
        }
        Text {
            x: -272
            y: -210
            width: 80
            height: 20
            text: qsTr("CSG")
            anchors.centerIn: parent
        }

        TextInput {
            id: textInput1
            x: -272
            y: -245
            width: 83
            height: 20
            text: qsTr("radiusInput")
            horizontalAlignment: Text.AlignRight
            anchors.top: parent.top
            anchors.topMargin: -210
            transformOrigin: Item.Center
            inputMask: qsTr("")
            font.pixelSize: 12
        }

        Rectangle {
            id: simpleButton
            x: 175
            y: 370
            color: "grey"
            width: 150; height: 75

            Text {
                id: buttonLabel
                anchors.centerIn: parent
                text: "Button"
            }
            MouseArea {
                id: buttonMouseArea

                // Anchor all sides of the mouse area to the rectangle's anchors
                anchors.fill: parent
                // onClicked handles valid mouse button clicks
                onClicked: console.log(buttonLabel.text + " clicked")
            }
        }
    }


}
