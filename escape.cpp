#include <iostream>
#include<windows.h>


using namespace std;
 
void printmaze();
void moveplayerLeft();
void moveplayerRight();
void moveplayerUP();
void moveplayerDown();


char maze[20][20]={
    {'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#','#'},
    {'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'#' ,' ' ,' ','#'},
    {'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'W' ,'W','#'}
};


int mouseX=1;
int mouseY=2;
int count=0;
int lives=4;
bool gameover=true;


main()              
{
    bool gameRunning = true;
    while (gameRunning)
    {
        Sleep(200);
        system("CLS");
        printmaze();
        maze[mouseX][mouseY]='M';
        if (GetAsyncKeyState(VK_LEFT)){
            moveplayerLeft(); 
        }
        if (GetAsyncKeyState(VK_RIGHT)){
            moveplayerRight(); 
        }
        if (GetAsyncKeyState(VK_UP)){
            moveplayerUP(); 
        }
        if (GetAsyncKeyState(VK_DOWN)){
            moveplayerDown(); 
        }
        if(maze[mouseX][mouseY]=='W'){
            cout<<"YOU WON THE GAME";
            Sleep(2000);
            break;
        }
        if (GetAsyncKeyState(VK_ESCAPE)){
            gameRunning = false; // Stop the game
        }
        if(count==4){
            cout<<"YOU ARE DIED";
            break;
        }
        cout<<"lives : "<<lives<<endl;
    }
}

void printmaze(){
    for(int i=0 ; i<20 ; i++){
        for(int j=0 ; j<20 ; j++){
            cout<<maze[i][j];
        }
        cout<<endl;
    }
}

void moveplayerLeft()
{
    maze[mouseX][mouseY] = ' ';
    mouseY = mouseY - 1;
    if(maze[mouseX][mouseY]=='#')
    {
        lives--;
        count++;
    }
    maze[mouseX][mouseY] = 'M';
    
}
void moveplayerRight()
{
    maze[mouseX][mouseY] = ' ';
    mouseY = mouseY + 1;
    if(maze[mouseX][mouseY]=='#')
    {
        lives--;
        count++;
    }
    maze[mouseX][mouseY] = 'M';
    
}
void moveplayerDown()
{
    maze[mouseX][mouseY] = ' ';
    mouseX = mouseX + 1;
    if(maze[mouseX][mouseY]=='#')
    {
        lives--;
        count++;
    }
    maze[mouseX][mouseY] = 'M';
    
}
void moveplayerUP()
{
    maze[mouseX][mouseY] = ' ';
    mouseX = mouseX - 1;
    if(maze[mouseX][mouseY]=='#')
    {
        lives--;
        count++;
    }
    maze[mouseX][mouseY] = 'M';
    
}