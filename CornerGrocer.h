/*
 * Name: Robert Duggan
 * Date: 04/14/2023
 * 
 * CornerGrocer.h - Header for CornerGrocer class (Declarations)
 * The CornerGrocer class reads a file of grocery items and counts
 * the number of occurances of all the items. It will allow the user
 * to search through the list and report the count for a specific item
 * or list every item in the database with its occurances either as a 
 * numerical value or as a histogram.
 */

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
	//ACCESSORS//
	map<string, int> GetGrocerList();

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
