#include <cstdlib>
#include "aDeckOfCards.h"
#include <algorithm>
#include <iostream>

using namespace std;

//Constructor takes a brand vector and a suit vector to create the fullDeck vector comprised of aCard objects
aDeckOfCards::aDeckOfCards() {
	int i, j;
	for (i = 0; i < brand.size(); ++i) {
		for (j = 0; j < suit.size(); ++j) {
			aCard c;
			c.setBrand(brand.at(i));
			c.setSuit(suit.at(j));
			this->fullDeck.push_back(c);
		}
	}
}

//Draws cards from the fullDeck vector. It adds drawn cards to the local hand vector and removes
//them from the fullDeck vector. It is meant to draw without replacement.
std::vector<aCard> aDeckOfCards::draw(int cardCount) {
	vector<aCard> hand;
	int i, index;
	for (i = 0; i < cardCount; ++i) {
		if (this->fullDeck.empty()) {
			break;
		}
		index = getRandom(1, this->fullDeck.size());
		hand.push_back(this->fullDeck.at(index - 1));
		int x = min((int)fullDeck.size(), index - 1);
		x = max(0, x);
		this->fullDeck.erase(fullDeck.begin() + x);
	}
	return hand;
}
//drawOne selects a card from the fullDeck vector at random and does not delete the specified card.
//Therefore, drawOne draws with replacement.
aCard aDeckOfCards::drawOne() {
	return fullDeck.at(getRandom(1, this->fullDeck.size()) - 1);
}
