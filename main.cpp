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

	cout << "Opening " << inFilename << endl;

	reader.open(inFilename);

	if (!reader.is_open()) {
		cout << "Failed to open " << inFilename << endl;
		return 1;
	}

	reader >> item;

	grocerItems.emplace(item, 1);

	while (!reader.fail()) {
		reader >> item;

		if (!grocerItems.count(item)) {
			grocerItems.emplace(item, 1);
		}
		else {
			grocerItems.at(item) += 1;
		}
	}

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