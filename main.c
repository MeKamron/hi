#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
char Arr[3][3]={'1','2','3','4','5','6','7','8','9'};
int count=1;
char Player1[30],Player2[30];


void Display()
{
    system("Color 2F");

    char str[20]="L O A D I N G...";

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|||||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t||||||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|||||||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t||||||||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|||||||||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|||||||||||");
    Sleep(700);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t|||||||||||||");
    Sleep(600);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%s",str);
    printf("\n\t\t\t\t\t\t||||||||||||||||");
    Sleep(800);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tT I C"); Sleep(1000); printf("\tT A C"); Sleep(1000); printf("\tT O E");
    system("cls");


}

char checkdraw()
{
    char n='X';
    if(n==Arr[0][0]&& Arr[0][0]==Arr[0][1] && Arr[0][0]==Arr[0][2]){
    return n;
    } else if (n==Arr[1][0]&& Arr[1][0]==Arr[1][1] && Arr[1][0]==Arr[1][2]){
    return n;

    } else if (n==Arr[2][0]&& Arr[2][0]==Arr[2][1] && Arr[2][0]==Arr[2][2]){
    return n;

    } else if (n==Arr[0][0]&& Arr[0][0]==Arr[1][0] && Arr[0][0]==Arr[2][0]){
    return n;

    } else if (n==Arr[0][1]&& Arr[0][1]==Arr[1][1] && Arr[0][1]==Arr[2][1]){
    return n;

    } else if (n==Arr[0][2]&& Arr[0][2]==Arr[1][2] && Arr[0][2]==Arr[2][2]){
    return n;

    } else if (n==Arr[0][0]&& Arr[0][0]==Arr[1][1] && Arr[0][0]==Arr[2][2]){
    return n;

    } else if (n==Arr[0][2]&& Arr[0][2]==Arr[1][1] && Arr[0][2]==Arr[2][0]) {
    return n;
    }

    char k='O';
    if(k==Arr[0][0]&& Arr[0][0]==Arr[0][1] && Arr[0][0]==Arr[0][2]){
    return k;
    } else if (k==Arr[1][0]&& Arr[1][0]==Arr[1][1] && Arr[1][0]==Arr[1][2]){
    return k;

    } else if (k==Arr[2][0]&& Arr[2][0]==Arr[2][1] && Arr[2][0]==Arr[2][2]){
    return k;

    } else if (k==Arr[0][0]&& Arr[0][0]==Arr[1][0] && Arr[0][0]==Arr[2][0]){
    return n;

    } else if (k==Arr[0][1]&& Arr[0][1]==Arr[1][1] && Arr[0][1]==Arr[2][1]){
    return k;

    } else if (k==Arr[0][2]&& Arr[0][2]==Arr[1][2] && Arr[0][2]==Arr[2][2]){
    return k;

    } else if (k==Arr[0][0]&& Arr[0][0]==Arr[1][1] && Arr[0][0]==Arr[2][2]){
    return k;

    } else if (k==Arr[0][2]&& Arr[0][2]==Arr[1][1] && Arr[0][2]==Arr[2][0]) {
    return k;
    }

        else return '/n';
}


void Jadval()
{

    int i,j;

    for(i=0; i<3; i++){
        printf("\t|");
        for(j=0; j<3; j++)
        {
            printf(" %c |",Arr[i][j]);
        }
        printf("\n\t|---|---|---|\n");
    }
}
 int Game()
{
    int i,j;
    char n,a,f;

    printf("Who will play for X: ");
    scanf("%s",&Player1);
    printf("\nWho will play for O: ");
    scanf("%s",&Player2);
    system("cls");
    Jadval();

    while (1)
    {
        if (count%2==0){
            printf("\n%s: ",Player1);
        } else
          printf("\n%s: ",Player2);
          scanf("%c",&n);

          for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(n==Arr[i][j])
                if(count%2==0){
                    Arr[i][j]='X';
                } else Arr[i][j]='O';
            }
          }
          system("cls");
          Jadval();

          a=checkdraw();
          if(a=='X'){
            printf("\n%s Won !!!",Player1);
            break;
          } else if(a=='O'){
            printf("\n%s Won !!!",Player2);
            break;
          } else if(a=='/n'){
          continue;
          }
          if(count>9){
                printf("\nGame Draw !!!");
            break;
          }

          //system("cls");
          //Jadval();
         count++;
        if (count%2==0){
            printf("\n%s: ",Player1);
        } else
          printf("\n%s: ",Player2);

          scanf("%c",&n);
          for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(n==Arr[i][j])
                if(count%2==0){
                    Arr[i][j]='X';
                } else
                Arr[i][j]='O';
            }
          }
          system("cls");
          Jadval();

          a=checkdraw();
          if(a=='X'){
            printf("\n%s Won !!!",Player1);
            break;
          } else if(a=='O'){
            printf("\n%s Won !!!",Player2);
            break;
          } else if(a=='/n'){
          continue;
          }
          if(count>9){
                printf("\nGame Draw !!!");
            break;
          }

          //system("cls");
          //Jadval();
    }
}


int main(){
    char a;
    Display();
    Game();


    return 0;
}
