#ifndef joystickscene_H
#define joystickscene_H

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDir>
#include <QString>
#include <QMessageBox>
#include <QPointF>
#include <QGraphicsSceneMouseEvent>
#include <list>

#ifndef NULL
#define NULL 0
#endif

#ifndef UINT
#define UINT unsigned int
#endif

class joystickscene : public QGraphicsScene
{

    QString thumbPath;


    UINT mapWidth;
    UINT mapHeight;

    UINT itemSize;
    UINT itemScale;

    bool pathOnScreen;

    void freeNodes();
    void destroyMap();
    void obtainPath(bool saveChanges = false);
    void reDrawStartEndNodes();

public:
    joystickscene(QObject * parent = 0);
    ~joystickscene();

    void setMap(UINT mapWidth, UINT mapHeight);
    void setScale(UINT scale);



protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event);

};

#endif // joystickscene_H
