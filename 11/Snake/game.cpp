#include <iostream>
#include "termcolor/termcolor.hpp"
#include <conio.h>

using namespace std;
using namespace termcolor;

const int width = 20;
const int height = 20;

int x, y, fruitX, fruitY;
int tailX[100], tailY[100];
int numTail;
bool gameOver;
enum eMove { STOP = 0, LEFT, RIGHT, UP, DOWN};
eMove dir;


void onStart()
{
    gameOver = false;
    dir = STOP;
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruitX = rand() % width;
    fruitY = rand() % height;
}

void Draw() 
{
    system("cls");

    for (int i = 0; i < width + 1; i++)
        cout << blue << "#";

    cout << endl;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j == 0 || j == width - 1)
                cout << blue << "#";
            if (i == y && j == x)
                cout << yellow << "S";
            else if (i == fruitY && j == fruitX)
                cout << red << "F";
            else
            {
                bool space = false;
                for (int l = 0; l < numTail; l++)
                {
                    if (tailX[l] == j && tailY[l] == i)
                    {
                        cout << yellow << "s";
                        space = true;
                    }
                }
                if (!space)
                    cout << " ";
            }            
        }
        cout << endl;
    }
    

    for (int i = 0; i < width + 1; i++)
    {
        cout << blue << "#";
    }
}

void input()
{
    if (_kbhit())
    {
        switch (_getch ())
        {
        case 'a': dir = LEFT;
            break;

        case 's': dir = DOWN;
            break;

        case 'd': dir = RIGHT;
            break;

        case 'w': dir = UP;
            break;

        case 'z': gameOver = true;
            break;
        }
    }
}

void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];

    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for(int i = 1; i < numTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
    case UP: y--;
        break;

    case LEFT: x--;
        break;

    case DOWN: y++;
        break;

    case RIGHT: x++;
        break;
    }

    if (x > width - 2|| x < 0) {gameOver = true;}
    if (y > height - 1|| y < 0) {gameOver = true;}

    for (int i = 0; i < numTail;  i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }

    if (x == fruitX && y == fruitY)
    {
        numTail++;
        fruitX = rand() % width;
        fruitY = rand() % height;
    }
}

int main()
{
    srand(time(NULL));

    onStart();
    while (!gameOver)
    {
        Draw();
        input();
        logic();
        Sleep(200);
    }
    

    cout << reset;
    return 0;
}