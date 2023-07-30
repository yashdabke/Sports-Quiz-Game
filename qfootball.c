#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "tools.h"
void qfootball(char* name)
{
	int score=0;
	char option;
	system("cls");
	printf("\n\n\n\n\t\t\t%s has chosen Football\n\n\n\n\n\n\n\n\n\t\t\t!!!GOOD LUCK..YOU'LL NEED IT!!!",name);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key to Start");
	getch();
	system("cls");
	
	
	SetColor(14);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n1.Which tournament happens every 4 years\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.FIFA World Cup\t\tB.Premier League\n\nC.La Liga\t\t\tD.Serie A");
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
	printf("\n2.How many Referees are present on court?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.1\t\tB.2\n\nC.3\t\tD.4");
	printf("\n\n");
	option=toupper(getch());
	if(option=='D')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option D");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n3.How long is a Football Match?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.30 mins\t\tB.45 mins\n\nC.60 mins\t\tD.90 mins");
	printf("\n\n");
	option=toupper(getch());
	if(option=='D')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option D");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n4.How many players are on the starting lineup?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.10\t\tB.11\n\nC.12\t\tD.13");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n5.How many substitutions can a team make?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.1\t\tB.2\n\nC.3\t\tD.4");
	printf("\n\n");
	option=toupper(getch());
	if(option=='C')
	{
		SetColor(2);
		score+=2;
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
	printf("\n6.Who scored the fastest Hat Trick in the Premier League?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Jamie Vardy\t\tB.Sadio Mane\n\nC.Sergio Aguero         D.Harry Kane");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n7.Cristiano Ronaldo exclaims which word when celebrating a goal?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Dee!\t\tB.Hee!\n\nC.Sii!\t\tD.Lee!");
	printf("\n\n");
	option=toupper(getch());
	if(option=='C')
	{
		SetColor(2);
		score+=2;
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
	printf("\n8.Messi has won a record number of Ballon d'Or awards - how many?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.5\t\tB.6\n\nC.7\t\tD.8");
	printf("\n\n");
	option=toupper(getch());
	if(option=='B')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option B");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n9.Which club has won the most Champions League titles?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.AC Milan\t\tB.Liverpool FC\n\nC.FC Bayern München\tD.Real Madrid");
	printf("\n\n");
	option=toupper(getch());
	if(option=='D')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
	}
	else
	{
		SetColor(4);
		printf("Wrong answer\nCorrect answer: Option D");
		getch();
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n10.In video game FIFA 20, team Piemonte Calcio represents which real-life club?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Juventus\t\t\tB.Inter Milan\n\nC.Paris Saint-Germain F.C.\tD.Leeds United");
	printf("\n\n");
	option=toupper(getch());
	if(option=='A')
	{
		SetColor(2);
		score+=2;
		printf("\aCorrect Answer. Good Start. %s gets %d points",name,score);
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