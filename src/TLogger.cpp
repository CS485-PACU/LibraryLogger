#include "../include/TLogger.h"
#include <iostream>

int TLogger::ID = 0;

TLogger::TLogger() {
	mID = ID ++;
}


void TLogger::transformNewToOld() {
	std::cout << "T: " << mID << " TRANSFORM\n";
	// call up to parent
	ILogger::transformNewToOld();
}
