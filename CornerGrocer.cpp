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

//ACCESSORS//
map<string, int> CornerGrocer::GetGrocerList() {
	return this->grocerItems;
}

int CornerGrocer::GetSentinel() {
	return this->SENTINEL;
}

//FUNCTIONS//
/*
 Draws the menu items
*/
void CornerGrocer::DrawMenu() {
	cout << "1. Search for an Item's Sales" << endl;
	cout << "2. Print All Sales (numeric)" << endl;
	cout << "3. Print All Sales (histogram)" << endl;
	cout << SENTINEL << ". Exit" << endl << endl;
}

/*
 Loops until a valid choice is entered
*/
int CornerGrocer::GetSelection() {
	int selection = 0;
	bool needSelection = true;

	do {
		cout << "Enter selection ";
		selection = ValidateSelection();
		needSelection = ((selection < 1) || (selection > SENTINEL));
		if (needSelection) {
			cout << "Invalid choice -- Please select from 1 to " << SENTINEL << endl;
		}
		cout << endl;
	} while (needSelection);

	return selection;
}

/*
  Validates the GetSelections input
 */
int CornerGrocer::ValidateSelection() {
	int selection;

	do {
		cin >> selection;

		//Check if cin type doesn't match 
		if (cin.fail()) {
			//Prevent infinite loop
			cin.clear();
			cin.ignore(100, '\n');
			//Inform user of error and action
			cout << "You must type in an integer ";
			continue;
		}
		else {
			if (selection <= 0) {
				//Inform user of error and action
				cout << "Invalid choice -- Please select from 1 to " << SENTINEL << " ";
				continue;
			}
		}
	} while (selection <= 0);

	return selection;
}

/*
 Allow user to search list and return occurances
*/
void CornerGrocer::SearchMap() {
	//Temp location to store the item they wish to find
	string searchTerm;

	//Prompt user for a search term
	cout << "Please type item you wish to find (case sensitive) ";
	cin >> searchTerm;
	cout << endl;

	//Check if search term is in the map
	if (grocerItems.count(searchTerm)) {
		cout << "We sold " << grocerItems.at(searchTerm) << " " << searchTerm << endl;
	}
	else {
		cout << searchTerm << " not found" << endl;
	}

	cout << endl;
}

/*
 Prints out the items in the map in a numerical
 format
 */
void CornerGrocer::PrintList() {
	for (auto item : this->grocerItems) {
		cout << item.first << " " << item.second << endl;
	}
	cout << endl;
}

/*
 Prints out the items in the map in a histogram
 format
 */
void CornerGrocer::PrintHistogram() {
	//Eventually fills with * for histogram
	string count = "";

	for (auto item : this->grocerItems) {
		//fill count with the number of '*' from map at item
		count.insert(0, item.second, '*');
		cout << item.first << " " << count << endl;
		count = "";
	}

	cout << endl;
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
	//cout << "Trying to open " << filename << endl;
	reader.open(filename);

	if (!reader.is_open()) {
		cout << "Failed to open " << filename << endl;
		return;
	}
	else {
		//cout << filename << " opened" << endl;
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

	//Close the reader
	//cout << "Closing " << filename << endl << endl;
	reader.close();
}

/*
 Writes to the passed filename from the grocerItems map

 @param filename - pass a file for the writer to write to.
 */
void CornerGrocer::WriteFile(string filename) {
	//Use writer to write to file
	ofstream writer;

	//Open the file
	//cout << "Trying to open/create " << filename << endl;
	writer.open(filename);

	//Failed to open so exit
	if (!writer.is_open()) {
		cout << "Failed to open/create " << filename << endl;
		return;
	}
	else {
		//cout << filename << " opened" << endl;
	}

	//Write the item and frequency to file
	for (auto grocery : this->grocerItems) {
		writer << grocery.first << " " << grocery.second << endl;
	}

	//Close the writer
	//cout << "Closing " << filename << endl << endl;
	writer.close();
}