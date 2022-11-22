#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QList>
#include <QTimer>
#include "Pellet.h"
#include "enemy.h"
#include "bullet.h"
#include "Health.h"

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int lives, rows, columns;
    int data[15][15];
    bool invincible;
    QApplication* b;
    Health* h1;

public:
    Player(int board[15][15], QApplication* c, Health* h2);

signals:
    void KeyPressed(QKeyEvent* event);

public slots:
    void KeyPressEvent(QKeyEvent* event);

private slots:
    void timeout_evet();
};

#endif
