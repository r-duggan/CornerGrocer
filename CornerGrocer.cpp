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

}

void CornerGrocer::WriteFile(string filename) {

}