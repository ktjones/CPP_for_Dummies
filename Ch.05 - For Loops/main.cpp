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

cout << "Enter the number of times the loop should run: ";
cin >> nVariable1;

for (nVariable2 = 1 ; nVariable2 < nVariable1 || nVariable2 == nVariable1; ++nVariable2)
    {
        cout << "This is loop #" << nVariable2 << endl;
    }

  // wait until user is ready before terminating program
  // to allow the user to see the program results

  system("PAUSE");
  return 0;
}
