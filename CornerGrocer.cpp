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

/*
 Reads the passed filename (if found) and stores the info
 in grocerItems map.

 @param filename - pass a file for the reader to look through
 */
void CornerGrocer::ReadFile(string filename) {
	//Use reader to loop through file
	ifstream reader;

	//Temp storage while looping
	string item;

	//Open the file
	cout << "Trying to open " << filename << endl;
	reader.open(filename);

	if (!reader.is_open()) {
		cout << "Failed to open " << filename << endl;
		return;
	}
	else {
		cout << filename << " opened" << endl;
	}

	//Move the first item from the file in
	reader >> item;
	this->grocerItems.emplace(item, 1);

	//Loop through the rest of the items
	while (!reader.fail()) {
		reader >> item;

		//Check if the item is already present in map
		//Not found so add it
		if (!this->grocerItems.count(item)) {
			this->grocerItems.emplace(item, 1);
		}
		//Found so increase the count
		else {
			this->grocerItems.at(item) += 1;
		}
	}
}

void CornerGrocer::WriteFile(string filename) {

}