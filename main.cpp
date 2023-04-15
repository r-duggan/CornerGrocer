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
	CornerGrocer grocer;
	map<string, int> grocerItems;

	string item;

	
	ofstream writer;

	string inFilename = "inputFile.txt";
	string outFilename = "frequency.dat";

	writer.open(outFilename);

	if (!writer.is_open()) {
		cout << "Couldn't open " << outFilename << endl;
	}

	for (auto grocery : grocerItems) {
		writer << grocery.first << " " << grocery.second << endl;
	}

	reader.close();
	writer.close();

	grocer.DrawMenu();
	grocer.GetSelection();

	return 0;
}