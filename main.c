#include <stdio.h>
#include <stdlib.h>
int checkForWin();
void displayBoard();
void markBoard(int choice, char mark);
int square[10],choice;
int win=2, player=1;
int main()
{
    char n;
    char mark;
    for(int i=1;i<10;i++)
    {
    n='0'+i;
    square[i]=n;
    }
    do
    {
    displayBoard();
    player = (player%2)?1:2;
    printf("   Your Turn %d:    ",player);
    scanf("%d",&choice);
    mark=(player==1)?'X':'O';
    markBoard(choice,mark);
    win=checkForWin();
    if(win==0)
    {
        printf("Draw!");
        break;
    }
     if(win==1)
    {
        printf("player %d win",player);
        break;
    }
    player++;
    }
    while(win!=1);
    return 0;
}

void displayBoard(){
    system("clear");
    printf("\n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |      \n",square[1],square[2],square[3]);
    printf("|       |       |       |\n");
    printf("|_______|_______|_______|\n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |      \n",square[4],square[5],square[6]);
     printf("|       |       |       |\n");
    printf("|_______|_______|_______|\n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |     \n",square[7],square[8],square[9]);
     printf("|       |       |       |\n");
     printf("|_______|_______|_______|\n");


}

void markBoard(int choice,char mark)
{
    if(choice==1&&square[1]=='1')
    square[1]=mark;
    else if(choice==2&&square[2]=='2')
    square[2]=mark;
    else if(choice==2&&square[2]=='2')
    square[2]=mark;
    else if(choice==3&&square[3]=='3')
    square[3]=mark;
    else if(choice==3&&square[3]=='3')
    square[3]=mark;
    else if(choice==3&&square[3]=='3')
    square[3]=mark;
    else if(choice==4&&square[4]=='4')
    square[4]=mark;
    else if(choice==5&&square[5]=='5')
    square[5]=mark;
    else if(choice==6&&square[6]=='6')
    square[6]=mark;
    else if(choice==7&&square[7]=='7')
    square[7]=mark;
    else if(choice==8&&square[8]=='8')
    square[8]=mark;
    else if(choice==9&&square[9]=='9')
    square[9]=mark;
    else
    {
        printf("     Invalid move");
        player--;
    }


}
    int checkForWin()
{
    if(square[1]==square[2]&&square[1]==square[3])
        win=1;
    if(square[4]==square[5]&&square[4]==square[6])
        win=1;
    if(square[7]==square[8]&&square[7]==square[9])
        win=1;
    if(square[1]==square[4]&&square[1]==square[7])
        win=1;
    if(square[2]==square[5]&&square[2]==square[8])
        win=1;
    if(square[3]==square[6]&&square[3]==square[9])
        win=1;
    if(square[1]==square[5]&&square[1]==square[9])
        win=1;
    if(square[3]==square[5]&&square[3]==square[7])
        win=1;
    if(square[1]!='1'   &&square[2]!= '2'  &&square[3]!=  '3'  &&square[4]!=  '4'  &&square[5]!=  '5'
            &&square[6]!=  '6'  &&square[7]!=  '7'  &&square[8]!=  '8'  &&square[9]!=  '9'  )
             win=0 ;
        return win;
}


