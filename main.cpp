/*
 * Name: Robert Duggan
 * Date: 04/14/2023
 * 
 * main.cpp - Main
 * Instantiates a CornerGrocer object and dictates how the program will actually
 * function. 
 *		* Read a file
 *		* Write a file (back-up)
 *		* Allow user to interact with the data
 *			* Search for item
 *			* Print all and how many occurances
 */
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "CornerGrocer.h"

using namespace std;

int main() {
	//Instantiate a CornerGrocer class
	CornerGrocer grocer;
	int selection;

	//Read the input file (can have the user specify a file later)
	grocer.ReadFile("inputFile.txt");

	//Write the items and frequency to file
	grocer.WriteFile("frequency.dat");

	do {
		//Draw menu and get selection from user
		grocer.DrawMenu();
		selection = grocer.GetSelection();
		
		if (selection == 1) {
			grocer.SearchMap();
		}
		else if (selection == 2) {
			grocer.PrintList();
		}
		else if (selection == 3) {
			grocer.PrintHistogram();
		}

	} while (selection != grocer.GetSentinel());
	   
	return 0;
}