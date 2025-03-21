#pragma once
#include <iostream>
#include <string>
using namespace std;

class CarNumber
{
	string number; 

	static int counter;
	static char firstLetter;
	static char secondLetter;

public:
	CarNumber(string region);

	string getNumber()const;
	static void showStatic();
};

