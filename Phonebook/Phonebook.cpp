// ConsoleApplication5.cpp : Defines the entry point for the console application.
//Author:Austin Boyd, Date:9/23/16
//The purpose of this program is to allow the user to enter/store names/phone numbers with a max number of entries at 10.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

char nameList[MAXENTRIES][2][MAXSIZE];//defining array globally
const int MAXENTRIES = 10; //max number of rows/entries
const int COLUMNS = 2;//number of colums or info per person (name + phone)
const int MAXSIZE = 50;//max number of chars per entry
int i = 0;

void AddName(char mylist[MAXENTRIES][2][MAXSIZE]); //defining addName globally
void showlist(char mylist[MAXENTRIES][2][MAXSIZE], int numEntered);//making showlist global

int main()
{
	char answer = 'y';

	for (i = 0; i < MAXENTRIES && (answer == 'y' || answer == 'Y'); i++)
	{
		AddName(nameList[i][0][MAXSIZE]);
		cout << "do you want to make another entry? Enter Y for Yes, enter anything else for no." << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();
	}

	printlist(nameList[10][2][MAXSIZE], i);

	return 0;
}

void printlist(char mylist[][2][MAXSIZE], int numEntered)
{
	cout << "Here is your list: " << endl;
	int i;
	for (i = 0; i < numEntered; i++)
	{
		cout << mylist[i][0][MAXSIZE] << "\t";
		cout << mylist[i][1][MAXSIZE] << endl;
	}
}
void AddName(char mylist[][2][MAXSIZE])
{
	static int i = 0;
	if (i >= MAXENTRIES)
	{
		cout << "the list is full." << endl;
	}
	else
	{
		
		cout << "Enter Name please: " << endl;
		cin << mylist[i][0][[MAXSIZE];
		cout << "Enter Phone Number" << endl;
		cin << (mylist[i][1][MAXSIZE]);
		cin.clear();
		cin.ignore();
		i++;
	}
}