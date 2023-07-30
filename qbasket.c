#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "tools.h"
void qbasket(char* name)
{
	int score=0;
	char option;
	system("cls");
	printf("\n\n\n\n\t\t\t%s has chosen Basketball\n\n\n\n\n\n\n\n\n\t\t\t!!!GOOD LUCK..YOU'LL NEED IT!!!",name);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key to Start");
	getch();
	system("cls");
	
	
	SetColor(14);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n1.Who invented Basketball?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. James Naismith\t\tB. Michael Jordan\n\nC. Kobe Bryant\t\t\tD. LeBron James");
	printf("\n\n");
	option=toupper(getch());
	if(option=='A')
	{
		SetColor(2);//green
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option A");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n2.When was Basketball invented?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 1850\t\tB. 1891\n\nC. 1789\t\tD. 1900");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n3.Where is the NBA played?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. USA\t\tB. France\n\nC. Brazil\tD. Mexico");
	printf("\n\n");
	option=toupper(getch());
	if(option=='A')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option A");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n4.What is the height of the ring?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 11ft\t\tB. 9ft\n\nC. 12ft\t\tD. 10ft");
	printf("\n\n");
	option=toupper(getch());
	if(option=='D')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option D");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n5.How many players play on court?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 6 a side\t\tB. 4 a side\n\nC. 5 a side\t\tD. 7 a side");
	printf("\n\n");
	option=toupper(getch());
	if(option=='C')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option C");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n6.How many points are awarded for a basket?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 1\t\tB. 2\n\nC. 3\t\tD. 4");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n7.What is the weight of the basketball?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 580-620 gms\t\tB. 550-560 gms\n\nC. 650-700 gms\t\tD. 500-540 gms");
	printf("\n\n");
	option=toupper(getch());
	if(option=='A')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option A");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n8.Which of these is a violation?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. Shooting\t\tB. Travelling\n\nC. Rebounding\t\tD. Layup");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n9.How long is a basketball match?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 30 mins\t\tB. 45 mins\n\nC. 48 mins\t\tD. 55 mins");
	printf("\n\n");
	option=toupper(getch());
	if(option=='C')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option C");
		getch();
	}
	
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n10.How many Referees are present on court?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 2\t\tB. 3\n\nC. 4\t\tD. 5");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. %s is on %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	getch();
	system("cls");
	SetColor(14);
	printf("\n\n\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\t\t\tCONGRATULATIONS %s. YOU HAVE COMPLETED THE QUIZ. YOUR TOTAL SCORE IS %d POINTS",name,score);
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	SetColor(15);
	printf("\n\n\n\n\n\n\n\n\n\tPress any key to go back to Main Menu");
	printf("\n\n\n\n\n\n\n\n\n\tPress Q to quit");
	option=toupper(getch());
	if(option=='Q')
	{
		system("cls");
		exit(1);
	}
	else
	{	
		main();
	}
}