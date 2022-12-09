// lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Caitlin Farley, Stock Price Calculator

#include "pch.h"
#include <iostream>
using namespace std;
//prototype
double stockPrice(int dollar, int num, int denom, int stock);


int main()
{//declare variables, initialize stockValue to 0
	int dollar, num, denom, stock;
	char answer;
	double stockValue = 0;

	//create do while to get price and shares from user while they wish to repeat
	do
	{
		cout << "Please enter the stock price and number of shares\n" << "enter as integers: dollar, numerator then denominator" << endl;
		cin >> dollar >> num >> denom;
		cout << "Please enter the number of shares" << endl;
		cin >> stock;

		//call stockPrice to do calculations
		stockValue = stockPrice(dollar, num, denom, stock);
		//set decimal place to hundredths
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		//output price to user
		cout << stock << " shares of stock with market price of " << dollar << " " << num << "/" << denom << " have the value " << stockValue << endl;

		cout << "Do you want to do another? y/n" << endl;
		cin >> answer;
		//close do while loop
	} while (answer == 'y' || answer == 'Y');


}
//pass stockPrice the 4 values to calculate the price of stock
double stockPrice(int dollar, int num, int denom, int stock)
{
	double price = 0;

	price = ((dollar + (num / (double)denom)) * stock);
	return price;
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
