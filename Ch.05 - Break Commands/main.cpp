//
//  Template -
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
  // Your code goes here

int nVariable1 = 0;
int nVariable2 = 0;

cout << "This exercise will prompt you for numbers.  Those numbers will continue to be added up until you enter a negative number." << endl;

while (nVariable1 >= 0)
    {
        cout << "Please enter a number: ";
        cin >> nVariable1;
        if (nVariable1 < 0)
            {
                cout << "The exercise will end here.\nThe final sum is: " << nVariable2 << endl;
                break;
            }
        // else
            // {
            nVariable2 = nVariable2 + nVariable1;
            cout << "The sum is: " << nVariable2 << endl;
            // }
    }


  // wait until user is ready before terminating program
  // to allow the user to see the program results

  system("PAUSE");
  return 0;
}
