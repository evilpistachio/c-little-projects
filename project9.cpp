// project9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
//Caitlin Farley, project 9
int main()
{//declare variables, set numbers not being input to 0
	int number, negSum, posSum, sum;
	negSum = 0;
	posSum = 0;
	sum = 0;
//ask user for input
	cout << "Please input 10 whole numbers ";
//create for to take in numbers until there is 10 entered
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
//if number is positive, positive calculations
		if (number > 0)
		{
			posSum += number;
		}
//if number is negative or zero, negative calculations
		else
		{
			negSum += number;
		}
	}
//sum calculations
		sum = posSum + negSum;

//output calculation results to user
		cout << "The total sum of positive numbers is " << posSum << endl;
		cout << "The total sum of negative numbers is " << negSum << endl;
		cout << "The sum of all numbers is " << sum << endl;

		

		return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
