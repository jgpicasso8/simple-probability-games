#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <vector>
/*
    This class takes integer input and stores it in a vector to be printed as a histogram
*/
class histogram
{
public:
    histogram(int lower, int upper, int size);
    void addData(int in);
    void printHist();
private:
    void findKey();
    std::vector<int> results;
    int upperLim;   //lowerBound for printing results
    int lowerLim;   //upperBound for printing results
    int key = 0;    //To scale the histogram to 60 X's
};

#endif 
