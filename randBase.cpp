#include "randBase.h"
/*
	This class seeds the srand once for the class. This means the same sequence would be used throughout all objects
	without being reset. getRandom(int min, int max) is a function that takes advantage of this and provides random
	numbers within a specified range to derived classes.
*/
int randBase::flag = 0;
unsigned int randBase::seed = 10;
randBase::randBase() {
	if (flag == 0) {
		srand(seed);
		flag = 1;
	}
}
int randBase::getRandom(int min, int max) {
	int num = rand() % max + min;
	return num;
}
