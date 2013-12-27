//*******************************
//
//  C++ Template Program
//
//*******************************

//*******************************
//
//  Standard Header
//
//*******************************

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************

void displayInstructions (void);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration

    char szString1 [128];
    char szString2 [4] = " - ";
    char szString3 [128];

	//*  Main Code

    displayInstructions();

    cout << "Enter the first String: ";
    cin.getline (szString1, 128);
    cout << "Enter the second String: ";
    cin.getline (szString3, 128);

    strcat(szString1, szString2);
    strcat(szString1, szString3);

    cout << szString1 << endl;

	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	system("PAUSE");
	return 0;
}

//********************************
//
//  Function #1 - Display Instructions
//
//********************************

void displayInstructions (void)
{
    //*  Variable Declaration

    //*  Main Code

    cout << "This program will ask for 2 strings.\n";
    cout << "Once entered, the program will concatenate\n";
    cout << "the 2 strings together and display them.\n";
    cout << endl;

    return;
}

