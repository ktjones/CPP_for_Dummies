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


	//*  Main Code

    //* typical character array stuff

    int n = 0;
    char szString[] = "Randy";

    for (n = 0; szString[n]; n++)
    {
        cout << "Letter #" << n << " is " << szString[n] << endl;
    }

    cout << endl;

    //* pointer array stuff

    char *pszString = szString;

    for (n = 0; *pszString; n++, pszString++)
    {
        cout << "Letter #" << n << " is " << *pszString << endl;
    }

    cout << endl;

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



