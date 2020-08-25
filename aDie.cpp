#include <cstdlib>
#include "aDie.h"

using namespace std;

aDie::aDie() {                           //Constructor
    value = 1;
}
int aDie::roll() {
    this->value = getRandom(1, 6);       // value is >= 1 and <= 6
    return value;
}
