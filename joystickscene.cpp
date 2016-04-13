#include "joystickscene.h"
#include "stdio.h"
#include "iostream"

joystickscene::joystickscene(QObject *parent)
{
    mapWidth = 0;
    mapHeight = 0;
    itemSize = 8;
    itemScale = 1;

    this->setSceneRect(0, 0, 300, 300);

    thumbPath = ":/images/Dcu/dcu_thumb2.png";
    pathOnScreen = false;

    parent = 0;
    //QGraphicsScene::QGraphicsScene(parent);
}

joystickscene::~joystickscene()
{
    destroyMap();

    this->items().clear();

    //QGraphicsScene::~QGraphicsScene();
}

void joystickscene::freeNodes()
{
    pathOnScreen = false;
}

void joystickscene::destroyMap()
{

}

void joystickscene::setMap(UINT mapWidth, UINT mapHeight)
{
    destroyMap();
    this->mapWidth = mapWidth;
    this->mapHeight = mapHeight;
}

void joystickscene::setScale(UINT scale)
{
    itemScale = scale;
}

void joystickscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    QPointF initPos, finalPos;
    UINT initX, initY, finalX, finalY, swap;

    initPos = event->buttonDownScreenPos(Qt::LeftButton);
    finalPos = event->lastScenePos();

    initX = initPos.toPoint().x() ;
    initY = initPos.toPoint().y() ;
    finalX = finalPos.toPoint().x() ;
    finalY = finalPos.toPoint().y();


}

void joystickscene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{


}

