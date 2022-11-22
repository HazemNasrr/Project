#include "Pellet.h"

Pellet::Pellet(int boarddata[15][15])
{
    QPixmap image("Sheild.png");
    image = image.scaledToWidth(50);
    image = image.scaledToHeight(50);
    setPixmap(image);

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            board[i][j] = boarddata[i][j];
        }
    }

    srand(time(NULL));

    rows = (rand() % 14) + 1;
    columns = (rand() % 14) + 1;

    while (board[rows][columns] == -1);
    {
        rows = (rand() % 14) + 1;
        columns = (rand() % 14) + 1;
    }

    setPos(50 + rows * 50, 50 + columns * 50);
}
