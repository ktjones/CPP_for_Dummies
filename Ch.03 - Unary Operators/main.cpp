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



//********************************
//
//  Main Program Section
//
//********************************

int main(int nNumberofArgs, char* pszArgs[])
{
	//*  Variable Declaration

        int n1;
        int n2;
        int n3;

        n1 = 5;
        n2 = ++n1;

        cout << "n1 = " << n1 << endl;
        cout << "n2 = " << n2 << endl;

        n1 = 5;
        n3 = n1++;

        cout << "n1 = " << n1 << endl;
        cout << "n3 = " << n3 << endl;


	//*  Main Code


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



