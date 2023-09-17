import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle{
        id: returnRectangle
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: - 10
        anchors.horizontalCenterOffset: - 200
        width: 100
        height: 100
        border.width: 2
        border.color: "black"
        color: "green"
        Text {
            id: returnText
            anchors.centerIn: parent
            text: qsTr("Return")
        }
        MouseArea{
            anchors.fill: parent
            onClicked:ball.state = "startPos"
        }
    }
    Rectangle{
        id: moveRectangle
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: - 10
        anchors.horizontalCenterOffset:  200
        width: 100
        height: 100
        border.width: 2
        border.color: "black"
        color: "green"
        Text {
            id: moveText
            anchors.centerIn: parent
            text: qsTr("Move")
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {ball.x += 30
            if(ball.x >= 400)
            {
                ball.state = "startPos"
            }
            else
            {
                ball.state = "currentPos"
            }
            }
        }
    }
    Rectangle{
        id:ball
        x: returnRectangle.x + 10
        y: returnRectangle.y + 10
        radius: width / 2
        width: 80
        height: 80
        color:"grey"
        states: [
            State
            {
                name: "currentPos"
                PropertyChanges
                {
                    target: ball
                    x:ball.x
                }
            },
            State
            {
                name: "startPos"
                PropertyChanges
                {
                    target: ball
                    x:returnRectangle.x + 10
                }
            }
        ]
        transitions:
        [
            Transition
            {
                from: "currentPos"
                to: "startPos"

                NumberAnimation
                {
                    id: moving
                    properties: "x,y"
                    duration: 1000
                    easing.type: Easing.InOutBack
                }
            }
        ]
    }




}
