#ifndef ACARD_H
#define ACARD_H

#include <string>
class aCard {
public:
    aCard();
    void setBrand(std::string brand);
    void setSuit(std::string Suit);
    void printCard();
private:
    std::string brand;
    std::string suit;
};

#endif
