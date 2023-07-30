#include <stdio.h> //COMPILE COMMAND: gcc temp.c qcricket.c qbasket.c qfootball.c qf1.c -o a      PASTE IN COMMAND PROMPT
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "tools.h"
void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
	 {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
      }
}
void rules()
{
	system("cls");
	SetColor(14); //YELLOW
	printf("\t\t\t\t\t\t    RULES OF THE GAME\n");
	printf("\t\t-------------------------------------------------------------------------------------------");
	printf("\n\t\t-------------------------------------------------------------------------------------------");
	printf("\n\t\t-->There are 4 sports to pick from:\n\t\ti. Cricket\n\t\tii. Football\n\t\tiii. Basketball\n\t\tiv. Formula-1");
	printf("\n\n\t\t-->You can choose any one Sport of your liking.");
	printf("\n\n\t\t-->Each Sport has 10 Questions.");
	printf("\n\n\t\t-->Each Question has 4 options A, B, C and D.");
	printf("\n\n\t\t-->To answer type in the option(A, B, C or D) you think is the right answer(Ignore Case).");
	printf("\n\n\t\t-->2 Points are awarded for every right answer and no points are deducted for any wrong answers.");
	printf("\n\n\t\t-->Your Total Score will be shown at the end of the Game.");
	printf("\n\n\t\t\t\t\t GOOD LUCK AND MAY THE BEST MAN WIN!!");
	printf("\n\n\tPress any key to go back to Main Menu");
	SetColor(15); //WHITE
	getch();
}

void main()
{
	char choice;
	char name[50];
	menu://label
	system("cls");
	SetColor(14); //YELLOW
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\t\t\t   SPORTS TRIVIA GAME\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\t\t\t\tWELCOME \n\t\t\t\t\t\t\t  TO \n\t\t\t\t\t\t       THE GAME \n");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n\t\t\t\t     PUT YOUR SPORTS KNOWLEDGE TO THE ULTIMATE TEST  ");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	SetColor(2); //GREEN
	printf("\n\t\t\t\t -> Press S to Start");
	SetColor(15); //WHITE
    printf("\n\t\t\t\t -> Press H for Help");
	SetColor(4); //RED
    printf("\n\t\t\t\t -> Press Q to Quit");
	SetColor(14);//YELLOW
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	SetColor(15); //WHITE
	printf("\n\n\n\t\t\t\t");
	choice=toupper(getch());
	if(choice=='S')
	{
		char qpick;
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n------------------------------------------------------------------------------------------------------------------------");
	    printf("\n------------------------------------------------------------------------------------------------------------------------");
		printf("\n\t\t\tEnter Player Name: \n\t\t\t");
		gets(name);//yash
		system("cls");
		printf("\n\n\n\n\t\t\t%s pick a Sport:",name);
		printf("\n\n\t\t\tA. Cricket\t\tB. Basketball\n\n\t\t\tC. Football\t\tD. Formula-1");
		printf("\n\n\t\t\t");
		qpick=toupper(getch());
		switch(qpick)
		{
			case 'A':
			qcricket(name);
			break;
			case 'B':
			qbasket(name);
			break;
			case 'C':
			qfootball(name);
			break;
			case 'D':
			qf1(name);
			break;
			default:
			printf("\n\n\n\n\t\t\tInvalid Output");
			main();
			break;
		}
	}
	else if(choice=='H')
	{
		rules();
		goto menu;
	}
	else if(choice=='Q')
	{
		system("cls");
		exit(1);
	}
	getch();
}
