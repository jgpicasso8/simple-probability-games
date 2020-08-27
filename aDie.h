#ifndef ADIE_H
#define ADIE_H
#include "randBase.h"
/*
    Creates a die object that uses a base class "randBase" to produce random values from 1 to 6.
*/
class aDie : public randBase {
public:
    aDie();
    operator int() { return roll(); };
private:
    int value;
    int roll();
};

#endif
