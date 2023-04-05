﻿// Lab9num2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;



void input(double& feet, double& inches);

void conversion(double &feet, double& inches, double& meters, double& centimeters);//prototype

void output(double meters, double centimeters);   //prototype



int main() //Input Function

{
	
		
	
	double feet, inches, centimeters, meters;
	
		char answer;
	

		
		do
			
		{
			
				cout << "Convert?(Y/N): ";
			
				cin >> answer;
			
				input(feet, inches);
			
				conversion(feet, inches, meters, centimeters);
			
				output(meters, centimeters);
			

				
		}while (answer == 'Y' || answer == 'y');
			
}



void input(double& feet, double& inches)

{
	
		cout << "Enter number of feet: ";
	
		cin >> feet;
	
		cout << "Enter number of inches: ";
	
		cin >> inches;
	
}



void conversion(double feet, double& inches, double& meters, double& centimeters)

{
	
		inches += 12 * feet;
	
		centimeters = inches * 2.54;
	
		meters = centimeters / 100;
	
		centimeters -= meters * 100;
	
}



void output(double meters, double centimeters)

{
	
		cout << meters << " meters and " << centimeters << "cm " << endl;
	
}
