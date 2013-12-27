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

int nVariable1;
int nVariable2;

cout << "Enter Variable #1: ";
cin >> nVariable1;

cout << "Enter Variable #2: ";
cin >> nVariable2;

if (nVariable1 > nVariable2)
        {
        cout << "Variable #1 is larger than Variable #2" << endl;
        }
    else
        {
        cout << "Variable #2 is larger than Variable #1" << endl;
        }

  // wait until user is ready before terminating program
  // to allow the user to see the program results

  system("PAUSE");
  return 0;
}
