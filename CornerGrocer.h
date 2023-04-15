#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>


using namespace std;

class CornerGrocer {
private:
	map<string, int> grocerItems;

public:
	//FUNCTIONS//
	void DrawMenu();
	int GetSelection();
	void ValidateChoice(int);
	string SearchMap(string);
	void PrintList();
	void PrintHistogram();
	void ReadFile(string);
	void WriteFile(string);
};

#endif
