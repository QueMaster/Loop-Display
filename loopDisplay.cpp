// Assignment 1 A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "iomanip"
#include "conio.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	const int SIZE = 8;

	float thisArray[SIZE] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,};

	float element3 = thisArray[2];
	cout << element3 << endl;

	thisArray[6] = 1.667;
	thisArray[5] = 3.333;

	cout << fixed << setprecision(1);
	cout << "Element 5: " << thisArray[4] << endl;
	cout << "Element 7: " << thisArray[6] << endl;

	for (int j = 0; j < SIZE; j++)
	{
		cout << "fractions[" << j << "] = " << thisArray[j] << endl;

	}




	_getch();
	return 0;
}
