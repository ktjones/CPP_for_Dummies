//
//  Template -
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

void instructionFunction (void);
double squareOfANumber (double dInputNumber);
double accumulatorFunction (void);

using namespace std;

//*************************************************************

int main(int nNumberofArgs, char* pszArgs[])
{
    // Your code goes here

    double nAccumulatedValue;

    instructionFunction();
    nAccumulatedValue = accumulatorFunction();

    cout << "The exercise will end here.\nThe final sum is: " << nAccumulatedValue << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    system("PAUSE");
    return 0;
}

//*************************************************************

double accumulatorFunction (void)
{
    //This function will add each new value to the total

    double nAccumulator = 0;
    double nVariable1 = 0;

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
            nAccumulator += squareOfANumber(nVariable1);
            cout << "The sum is: " << nAccumulator << endl;
        }
    }

    return nAccumulator;
}

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

double squareOfANumber (double dInputNumber)
{
    double dHoldingValue;
    dHoldingValue = dInputNumber * dInputNumber;
    return dHoldingValue;
}
