#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
void display();
void moveleft();
void moveright();
void gotoxy(int y, int x);
char maze[24][71] = {{"#####################################################################"},
                     {"||.. .....................................................  ......  ||"},
                     {"||..                   ...... ...                                   ||"},
                     {"||..                          ...                                   ||"},
                     {"||..                                                                ||"},
                     {"||..                                                                ||"},
                     {"||..                                                    ..       .  ||"},
                     {"||..                                                             .  ||"},
                     {"||..                                                             .  ||"},
                     {"||..     .....                                                   .  ||"},
                     {"||..                                                             .  ||"},
                     {"||..                                                         .      ||"},
                     {"||..                                                         .      ||"},
                     {"||                                                           .      ||"},
                     {"||                                                                  ||"},
                     {"||.                                                                 ||"},
                     {"||                                                                  ||"},
                     {"||..                                                         .      ||"},
                     {"||..                                                         .      ||"},
                     {"||..                                                                ||"},
                     {"||..                                                                ||"},
                     {"||.                                                                 ||"},
                     {"||                            J                                  .  ||"},
                     {"##################################################################### "}};
int jetX=23;
int jetY=30;
int flag=0;
main()
{
        display();
     
       while(true)
       {
             if (GetAsyncKeyState(VK_LEFT))
            {
               moveleft();
           }
           if (GetAsyncKeyState(VK_RIGHT))
        {
              moveright();
        }
      }
}
void display()
{
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 71; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void moveleft()
{
    if (maze[jetX][jetY - 1] == ' ')
    {
        maze[jetX][jetY] = ' ';

        gotoxy(jetY, jetX);
        jetY = jetY - 1;
        gotoxy(jetY, jetX);
        cout << 'J';
    }
}
void moveright()
{
    if (maze[jetX][jetY + 1] == ' ')
    {
        maze[jetX][jetY] = ' ';
        gotoxy(jetY, jetX);
        jetY = jetY + 1;
        gotoxy(jetY, jetX);
        cout << 'J';
    }
}
