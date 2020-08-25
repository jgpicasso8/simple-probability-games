#include "aCard.h"
#include <string>
#include <iostream>

aCard::aCard() {   //Constructor
    this->brand = "none";
    this->suit = "none";
}
void aCard::setBrand(std::string brand) {
    this->brand = brand;
}
void aCard::setSuit(std::string suit) {
    this->suit = suit;
}
void aCard::printCard() {
    std::cout << brand << "-" << suit;
}
