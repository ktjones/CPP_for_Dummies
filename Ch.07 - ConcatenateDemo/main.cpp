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
using namespace std;

//********************************
//
//  Function Declaration Section
//
//********************************

void displayInstructions (void);
void concatenateFunction (char szTarget[], char szSource[]);


//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration
    char szString1 [260];
    char szString2 [128];
    char szString3 [4] = " - ";

	//*  Main Code

    displayInstructions();

    cout << "Enter the first String: ";
    cin.getline (szString1, 128);
    cout << "Enter the second String: ";
    cin.getline (szString2, 128);

    concatenateFunction(szString1, szString3);
    concatenateFunction(szString1, szString2);

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

//*********************************
//
//  Function #2 - Concatenate Function
//
//*********************************

void concatenateFunction (char szTarget[], char szSource[])
{
    //* Variable Declaration
    int nTargetIndex = 0;
    int nSourceIndex = 0;

    //* Main Code
    //  - First, we will find the end of the first string
    //  - Second, we will tack on the string we want to concatenate

    while(szTarget[nTargetIndex] != 0)
    {
        nTargetIndex++;
    }

    while (szSource[nSourceIndex] != 0)
    {
        szTarget[nTargetIndex] = szSource[nSourceIndex];
        nTargetIndex++;
        nSourceIndex++;
    }

    szTarget [nTargetIndex] = '\0';

    return;
}
