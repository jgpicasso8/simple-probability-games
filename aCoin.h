#ifndef ACOIN_H
#define ACOIN_H
#include "randBase.h"
/*
	Creates a coin object that uses a base class "randBase" to produce random values from 0 to 1.
*/
class aCoin : public randBase {
public:
	aCoin();
	operator std::string() { return toss(); };
	//getHeads returns the total tail count of the Coin object produced
	int getHeads();
	//getHeads returns the total head count of the Coin object produced
	int getTails();
private:
	//toss returns the random string value as determined by the getrandom() function from randBase
	std::string toss();
	std::string result;
	int heads = 0;
	int tails = 0;
};

#endif
