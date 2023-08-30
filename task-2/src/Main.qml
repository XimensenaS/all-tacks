import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 400
    height: 400
    visible: true
    title: qsTr("Hello World")
ProgressBar
    {
        anchors.horizontalCenter:parent.horizontalCenter
        anchors.verticalCenter:parent.verticalCenter
        anchors.verticalCenterOffset: 160
        id:pg
        to: 60
        value: 15
        padding: 2
        background: Rectangle {
                implicitWidth: 200
                implicitHeight: 6
                color: "#e6e6e6"
                radius: 3
            }

            contentItem: Item {
                implicitWidth: 200
                implicitHeight: 4

                Rectangle {
                    width: pg.visualPosition * parent.width
                    height: parent.height
                    radius: 2
                    color: "#17a81a"
                }
            }
    }
    RowLayout
    {
        implicitWidth: 200
        anchors.horizontalCenter:parent.horizontalCenter
        anchors.verticalCenter:parent.verticalCenter
        anchors.verticalCenterOffset: 180
        id:layout
        spacing: 6
        Button
        {
            text: "▶️"
        }
        Button
        {
            text: "⏸️"
        }
        Button
        {
            text: "⏹"
        }
        Button
        {
            text: "⏪️"
        }
        Button
        {
            text: "⏩️"

        }
    }
}