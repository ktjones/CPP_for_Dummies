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
void getMonthNumber(int &nVariable1);
void displayMonthNumber(int &nVariable1);

//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration

    int nMonthNumber;

	//*  Main Code

    displayInstructions();

    for(;;)
    {
        getMonthNumber(nMonthNumber);
        displayMonthNumber(nMonthNumber);
    }

   	//*  Program End
	//   - wait until user is ready before terminating program
	//   - to allow the user to see the program results

	system("PAUSE");
	return 0;
}

//********************************
//
//  Functions Begin Here
//
//********************************

//* Function #1

void displayInstructions (void)
{

    //* Display the instructions

    cout << "This program prompts you to enter a number from 1 to 12 and then returns the correct month.";
    cout << endl << endl;

    return;
}

//* Function #2

void getMonthNumber(int &nVariable1)
{

    cout << "Please enter a number from 1 to 12: ";
    cin >> nVariable1;

    return;

}

//* Function #3

void displayMonthNumber(int &nVariable1)
{

     const char *pszMonthArray[] = {"invalid","January","February","March","April","May","June","July","August","September","October","November","December"};

     //* Evaluate the number entered

     if (nVariable1 < 0 || nVariable1 >12)
     {
         cout << "The month that is #" << nVariable1 << " is invalid" << endl;
     }
     else
     {
         cout << "The month that is #" << nVariable1 << " is " << pszMonthArray[nVariable1] << endl;
     }

     return;
}
