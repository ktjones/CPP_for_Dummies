//
//  Template -
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//*************************************************************

void instructionFunction (void)
{
    //This function displays the rules

    cout << "This exercise will prompt you for numbers.\n";
    cout << "Those numbers will continue to be added up\n";
    cout << "until you enter a negative number." << endl;
    return;
}

//*************************************************************

int accumulatorFunction (void)
{
    //This function will add each new value to the total

    int nAccumulator = 0;
    int nVariable1 = 0;

    for (;;)
    {
        cout << "Please enter a number: ";
        cin >> nVariable1;
        if (nVariable1 < 0)
        {
            break;
        }
        else
        {
            nAccumulator += nVariable1;
            cout << "The sum is: " << nAccumulator << endl;
        }
    }

    return nAccumulator;
}

//*************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
    // Your code goes here

    int nAccumulatedValue;

    instructionFunction();
    nAccumulatedValue = accumulatorFunction();

    cout << "The exercise will end here.\nThe final sum is: " << nAccumulatedValue << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    system("PAUSE");
    return 0;
}
