#include <cstdlib>
#include <string>
#include "aCoin.h"

using namespace std;

aCoin::aCoin() {               //Constructor
	result = "T";
}

string aCoin::toss() {
	this->result = ((getRandom(0, 2)) ? "T" : "H");
	(result == "T") ? ++tails : ++heads;
	return result;
}
int aCoin::getHeads() {
	return heads;
}
int aCoin::getTails() {
	return tails;
}
