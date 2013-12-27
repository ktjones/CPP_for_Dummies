//
//  Array Demo
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//
// Function Declarations
//
void displayInstructions(void);
int intakeNumbers(int nIntakeNumberArray [], int nMaxNumberElements);
void displayArray(int nDisplayNumberArray[], int nDisplayNumberElements);
int sumArray(int nSumArray[], int nSumArrayElements);

int main(int nNumberofArgs, char* pszArgs[])
{
    //
    // Variable Declaration
    //
    int nNumberArray[128];
    int nNumberofElements;
    int nSumOfArray;
    //
    //  Display Instructions
    //
    displayInstructions();

    //  Take Input Numbers
    nNumberofElements = intakeNumbers(nNumberArray, 128);

    //  Display the Numbers on Screen
    displayArray(nNumberArray, nNumberofElements);

    //  Determine the accumlated sum & Display it
    nSumOfArray = sumArray(nNumberArray, nNumberofElements);
    cout << endl << "The sum of the entered numbers is: " << nSumOfArray << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    system("PAUSE");
    return 0;
}

//
// Display Instructions
//
void displayInstructions()
{
    cout << "This program is going to ask\n";
    cout << "you for a series of numbers.\n";
    cout << "Please enter numbers until you are finished.\n";
    cout << "Enter a negative number to stop the sequence." << endl << endl;
    return;
}

//
// Intake Numbers
//
int intakeNumbers(int nIntakeNumberArray [], int nMaxNumberElements)
{
    //
    // Variable Declaration
    //
    int nIntakeNumberOfElements;
    int i;
    int nTempNumber;

    //

    for (i=0; i < nMaxNumberElements; i++)
    {
        cout << "Please enter a number: ";
        cin >> nTempNumber;

        if (nTempNumber < 0)
        {
            nIntakeNumberOfElements = i;
            break;
        }
        else
        {
            nIntakeNumberArray[i] = nTempNumber;
        }
    }

    return nIntakeNumberOfElements;

}

//
// Display the Array
//
void displayArray(int nDisplayNumberArray[], int nDisplayNumberElements)
{
    //
    // Declare Variables
    //
    int i;

    for (i=0; i < nDisplayNumberElements; i++)
    {
        cout << "Array Number " << i << ": " << nDisplayNumberArray[i] << endl;
    }

    return;

}

//
// Sum Array
//
int sumArray(int nSumArray[], int nSumArrayElements)
{
    //
    // Declare Variables
    //
    int i;
    int nSumArrayAccumulator = 0;

    for (i=0; i < nSumArrayElements; i++)
    {
        nSumArrayAccumulator += nSumArray[i];
    }

    return nSumArrayAccumulator;
}
