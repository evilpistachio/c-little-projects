﻿// project10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
//Caitlin Farley, project 10

int main()
{//declare all variables
//set numbers being calculated to 0
	int number, negSum, posSum, sum, avgPos, avgNeg, avg, countPos, countNeg, count;
	negSum = 0;
	posSum = 0;
	sum = 0;
	avgPos = 0;
	avgNeg = 0;
	avg = 0;
	countPos = 0;
	countNeg = 0;
	count = 0;
//ask user for input
	cout << "Please input 10 whole numbers ";
//create for so program stops taking in numbers after 10
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
//if number is greater than 0, calculations for positive numbers
		if (number > 0)
		{
			posSum += number;
			countPos++;
			count++;
		}
//calculations for negative numbers
		else
		{
			negSum += number;
			countNeg++;
			count++;
		}
	}
//if theres positive numbers, average calculations
	if (countPos > 0)
	{
		avgPos = (posSum) / countPos;
	}
//if theres negative numbers, average calculations
	if (countNeg > 0)
	{
		avgNeg = (negSum) / countNeg;
	}
//calculations for sum of all numbers
	sum = posSum + negSum;
//average for all numbers calculations
	if (count > 0)
	{
		avg = (sum) / count;
	}

	//output info to user
	cout << "The total sum of positive numbers is " << posSum << endl;
	cout << "The average of all positive numbers is " << avgPos << endl;
	cout << "The total sum of negative numbers is " << negSum << endl;
	cout << "The average of all negative numbers is " << avgNeg << endl;
	cout << "The sum of all numbers is " << sum << endl;
	cout << "The average of the sum all of the numbers is " << avg << endl;



	return 0;
}

