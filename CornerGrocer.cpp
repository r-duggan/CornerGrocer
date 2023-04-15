/*
 * Name: Robert Duggan
 * Date: 04/14/2023
 * 
 * CornerGrocer.cpp - Header file for CornerGrocer class (Definitions)
 * The CornerGrocer class reads a file of grocery items and counts
 * the number of occurances of all the items. It will allow the user
 * to search through the list and report the count for a specific item
 * or list every item in the database with its occurances either as a 
 * numerical value or as a histogram.
 */

#include "CornerGrocer.h"

//FUNCTIONS//
void CornerGrocer::DrawMenu() {
	cout << "****************************" << endl;
	cout << "* 1. Search for an item    *" << endl;
	cout << "* 2. Print All (numeric)   *" << endl;
	cout << "* 3. Print All (histogram) *" << endl;
	cout << "* 4. Exit                  *" << endl;
	cout << "****************************" << endl;
}

int CornerGrocer::GetSelection() {
	int selection;

	cout << "Enter selection ";
	cin >> selection;

	return selection;
}

void CornerGrocer::ValidateChoice(int choice) {

}

void CornerGrocer::PrintList() {

}

void CornerGrocer::PrintHistogram() {

}

void CornerGrocer::ReadFile(string filename) {
	//Create a reader t
	ifstream reader;
}

void CornerGrocer::WriteFile(string filename) {

}