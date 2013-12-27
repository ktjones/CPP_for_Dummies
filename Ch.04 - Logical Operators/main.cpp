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

cout.setf(cout.boolalpha);
int nVariable1;
int nVariable2;
bool bVariable1;

cout << "Enter the First Number: ";
cin >> nVariable1;

cout << "Enter the Second Number: ";
cin >> nVariable2;

bVariable1 = (nVariable1 == nVariable2);

cout << "Is " << nVariable1 << " equal to " << nVariable2 << "?" << endl;
cout << "The answer is " << bVariable1 << endl;

  // wait until user is ready before terminating program
  // to allow the user to see the program results

  system("PAUSE");
  return 0;
}

