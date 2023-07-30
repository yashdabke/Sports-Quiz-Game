#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "tools.h"
void qcricket(char* name)
{
	int score=0;
	char option;
	system("cls");
	printf("\n\n\n\n\t\t\t%s has chosen Cricket\n\n\n\n\n\n\n\n\n\t\t\t!!!GOOD LUCK..YOU'LL NEED IT!!!",name);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key to Start");
	getch();
	system("cls");
	
	
	SetColor(14);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n1.Which cricket team has won most ICC Cricket World Cup titles?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.West Indies\t\tB.India\n\nC.England\t\tD.Australia");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n2.Which of the following country did not won the ICC Cricket World Cup (50 over format) title so far?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.England\t\tB.South Africa\n\nC.New Zealand\t\tD.All of the above");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n3.Which Indian player got the first \"Man of the Tournament\" Award in the ICC Cricket World Cup?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Sachin Tendulkar\t\tB.Yuvraj Singh\n\nC.Mohinder Amarnath\t\tD.M.S. Dhoni");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n4.When did India win its first ICC Cricket world cup?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.2011\t\tB.1983\n\nC.1987\t\tD.2007");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n5.Who has scored the most runs in a single First-class innings?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Hanif Mohammad\t\tB.Sir Donald Bradman\n\nC.Brian Lara\t\t\tD.Sachin Tendulkar");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n6.Who is the leading wicket taker in the history of Test cricket?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Courtney Walsh\t\tB.Shane Warne\n\nC.Brian Lara\t\t\tD.Zaheer Khan");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n7.Who was the first captain of Indian Test team?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Vijay Hazare\t\tB.Lala Amarnath\n\nC.Lala Amarnath\t\tD.C K Nayudu");
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
	}
	
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n8.When was the first cricket Test match played?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.1877\t\tB.1870\n\nC.1788\t\tD.1873");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n9.Who has scored the most Test hundreds ever?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Sunil Gavaskar\t\tB.Steve Waugh\n\nC.Sachin Tendulkar\t\tD.Shane Warne");
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
	}
	
	
	SetColor(14);
	printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n10.Where did the 1st ODI match was played in India?\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	getch();
	printf("\n\nA.Mumbai\t\tB.Ahmedabad\n\nC.New Delhi\t\tD.Kolkata");
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