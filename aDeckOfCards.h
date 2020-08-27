#ifndef ADECKOFCARDS_H
#define ADECKOFCARDS_H
#include "aCard.h"
#include "randBase.h"
#include <vector>
#include <string>

using namespace std;
/*
	This class creates a deck of cards object. It inherits properties from the randBase class.
	Such a property includes the getRandom(int min, int max), which returns a random value
	within the specified range.
*/
class aDeckOfCards : public randBase {
public:
	aDeckOfCards();
	operator aCard() { return drawOne(); };
	std::vector<aCard> draw(int cardCount);
	aCard drawOne();
private:
	std::vector<string> brand = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K" };
	std::vector<string> suit = { "S", "H", "D", "C" };
	std::vector<aCard> fullDeck;
};

#endif 
