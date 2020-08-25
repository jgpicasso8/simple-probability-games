#include "histogram.h"
#include <numeric>
#include <iostream>

histogram::histogram(int lower = 0, int upper = 0, int size = 1) {   //Constructor
    results.resize(++size);
    lowerLim = lower;
    upperLim = upper;
    key = 1;
}

//Takes random integer values from aCoin and aDie objects (can take any integers if needed)
void histogram::addData(int in) {
    ++results.at(in);
}

//Takes stored values in the private vector and prints a formatted histogram
void histogram::printHist() {
    findKey();
    for (unsigned int i = lowerLim; i <= upperLim; ++i) {
        std::cout << i << ((i <= 9) ? "  " : " ");
        int temp = (results.at(i) / key);
        for (int j = 0; j < temp; j++) {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
}

//Calculates the scale factor for the histogram to be properly formatted
void histogram::findKey() {
    int totalCount = accumulate(results.begin(), results.end(), 0);
    key = (totalCount - 1) / 60 + 1;
}
