#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "tools.h"
void qf1(char* name)
{
	int score=0;
	char option;
	system("cls");
	printf("\n\n\n\n\t\t\t%s has chosen Formula-1\n\n\n\n\n\n\n\n\n\t\t\t!!!GOOD LUCK..YOU'LL NEED IT!!!",name);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key to Start");
	getch();
	system("cls");
	
	
	SetColor(14);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n1.What is the minimum distance of a F1 race?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 250 km\t\tB. 270 km\n\nC. 305km\t\tD. 320km");
	printf("\n\n");
	option=toupper(getch());
	if(option=='C')
	{
		score+=2;
		SetColor(2);
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option C");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n2.How many cars per team are allowed to race?\n");
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
	printf("\n3.Maximum total number of cars allowed in a race is:\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 20\t\tB. 22\n\nC. 24\t\tD. 26");
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
	printf("\n4.Which team has the most number of wins?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. Ferrari\t\tB. McLaren\n\nC. Mercedes\t\tD. Red Bull");
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
	printf("\n5.When was the F1 created?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 1940\t\tB. 1946\n\nC. 1950\t\tD. 1954");
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
	printf("\n6.How many engine manufacturers are there?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 3\t\tB. 5\n\nC. 6\t\tD. 7");
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
	printf("\n7.How many teams are currently present on the grid?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 8\t\tB. 9\n\nC. 10\t\tD. 12");
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
	printf("\n8.How many Grand Prix happen in a season?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA. 19\t\tB. 21\n\nC. 20\t\tD. 22");
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
	printf("\n9.Who supplies the tyres for the race?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Bridgestone\t\tB.Michelin\n\nC.Continental\t\tD.Pirelli");
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
	printf("\n10.Who is considered the greatest driver of all time?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Michael Schumacher\t\tB.Lewis Hamilton\n\nC.Sebastian Vettel\t\tD.Ayrton Senna");
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