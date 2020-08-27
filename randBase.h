//#pragma once
#ifndef RANDBASE_H
#define RANDBASE_H
#include <cstdlib>
/*
	This is the base class for aDie, aCoin, and aDeckOfCards classes. This class provides a
	random number within a specified range as determined by the derived classes. This class
	sets the srand once and only once so that the sequence of random numbers is not reset
	for every time it is used.
*/
using namespace std;
class randBase {
public:
	randBase();
	int getRandom(int min, int max);
private:
	static unsigned int seed;
	static int flag;

};

#endif
