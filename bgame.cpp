#include <iostream>
#include<windows.h>


using namespace std;
 
void printmaze();
void moveSnakeLeft();
void moveSnakeRight();
void moveSnakeUP();
void moveSnakeDown();
void gostpetrolling();


char maze[20][20]={
    {'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,'.' ,' ' ,'G' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,'=' ,'=' ,'=' ,'=' ,' ' ,' ' ,' ' ,'=' ,'=' ,'=' ,'=' ,'=' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,'.' ,' ' ,'.' ,' ' ,'.' ,' ' ,' ' ,'.' ,'.' ,' ' ,'.' ,' ' ,'.' ,' ' ,' ' ,'.' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,'=' ,'=' ,'=' ,'=' ,' ' ,'.' ,' ' ,'=' ,'=' ,'=' ,'=' ,'=' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,'G' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,'.' ,' ' ,'.' ,' ' ,'.' ,' ' ,'.' ,' ' ,' ' ,'.' ,'.' ,' ' ,'.' ,' ' ,'.','#'},
    {'#' ,' ' ,' ' ,'.' ,' ' ,' ' ,'.' ,' ' ,' ' ,'.' ,' ' ,'.' ,' ' ,' ' ,'.' ,' ' ,' ' ,' ' ,' ','#'},
    {'#' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,'.' ,' ','#'},
    {'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#' ,'#','#'}
};


int snakex=7;
int snakey=3;
int count=0;
int lives=3;
int score=0;
int gost1X=4;
int gost1Y=4;
int step=0;
bool gost_forwarding=true;
int gost2X=15;
int gost2Y=4;


bool gameover=true;



main()              
{
    bool gameRunning = true;
    while (gameRunning)
    {
        Sleep(200);
        system("CLS");
        printmaze();
        gostpetrolling();
        if (GetAsyncKeyState(VK_LEFT)){
            moveSnakeLeft(); 
        }
        if (GetAsyncKeyState(VK_RIGHT)){
            moveSnakeRight(); 
        }
        if (GetAsyncKeyState(VK_UP)){
            moveSnakeUP(); 
        }
        if (GetAsyncKeyState(VK_DOWN)){
            moveSnakeDown(); 
        }
        if (GetAsyncKeyState(VK_ESCAPE)){
            gameRunning = false; // Stop the game
        }
        if(maze[snakex]==maze[gost1X] && maze[snakey]==maze[gost1Y] ){
            lives--;
            count++;
        }
        if(maze[snakex]==maze[gost2X] && maze[snakey]==maze[gost2Y] ){
            lives--;
            count++;
        }
        if(count==3){
            cout<<"YOU ARE DIED";
            break;
        }
        if(score==25){
            cout<<"........YOU WON THE GAME......  ";
            Sleep(1000);
            break;
        }
        cout<<"lives : "<<lives<<endl;
        cout<<"score : "<<score;
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

void moveSnakeLeft()
{
    maze[snakex][snakey] = ' ';
    snakey = snakey - 1;
    if(maze[snakex][snakey]=='.')
    {
        score++;
    }
    if(maze[snakex][snakey]=='=' || maze[snakex][snakey]=='#')
    {
        lives--;
        count++;
    }
    maze[snakex][snakey] = 'O';
    
}
void moveSnakeRight()
{
    maze[snakex][snakey] = ' ';
    snakey = snakey + 1;
     if(maze[snakex][snakey]=='.')
    {
        score++;
    }
     if(maze[snakex][snakey]=='=' || maze[snakex][snakey]=='#')
    {
        lives--;
        count++;
    }
    maze[snakex][snakey] = 'O';
    
}
void moveSnakeDown()
{
    maze[snakex][snakey] = ' ';
    snakex = snakex + 1;
     if(maze[snakex][snakey]=='.')
    {
        score++;
    }
     if(maze[snakex][snakey]=='=' || maze[snakex][snakey]=='#')
    {
        lives--;
        count++;
    }
    maze[snakex][snakey] = 'O';
    
}
void moveSnakeUP()
{
    maze[snakex][snakey] = ' ';
    snakex = snakex - 1;
     if(maze[snakex][snakey]=='.')
    {
        score++;
    }
     if(maze[snakex][snakey]=='=' || maze[snakex][snakey]=='#')
    {
        lives--;
        count++;
    }
    maze[snakex][snakey] = 'O';
    
}

void gostpetrolling(){
  
    if(gost_forwarding==true){
        maze[gost1X][gost1Y] = ' ';
        gost1Y=gost1Y+1;
        step=step+1;
        maze[gost1X][gost1Y] = 'G';
        maze[gost2X][gost2Y] = ' ';
        gost2Y=gost2Y+1;
        maze[gost2X][gost2Y] = 'G';
        if(step==8){
            gost_forwarding = false;
        }
    }
    
    if(gost_forwarding==false){
        maze[gost1X][gost1Y] = ' ';
        gost1Y=gost1Y-1;
        maze[gost1X][gost1Y] = 'G'; 
        maze[gost2X][gost2Y] = ' ';
        gost2Y=gost2Y-1;
        maze[gost2X][gost2Y] = 'G'; 
        step=step-1;
        if(step==0){
            gost_forwarding=true;
        }
    }  
}