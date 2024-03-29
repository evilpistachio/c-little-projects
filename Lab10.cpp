﻿// Lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Caitlin Farley, Lab10

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;


int main()
{//declare variable to 
	ifstream fin;

	

	fin.open("numbers.dat");

	// If the file will not open prompt user of error-
	if (!fin)
	{
		cout << "Unable to open file!" << endl << endl;
		
	}

	// If the file opens, sum values and find the largest and smallest values-
	
	int next;
	int largest = 0;
	int smallest;
	
	smallest = largest = next;

	while (!fin.eof())
	{
		fin >> next;
		if (next < smallest)
			smallest = next;
		else if (largest < next)
			largest = next;
		fin >> next;
	}
	cout << "The largest number in the file is " << largest << endl;
	cout << "The smallest number in the file " << smallest << endl;
	fin.close();

	
	return 0;
}
	


