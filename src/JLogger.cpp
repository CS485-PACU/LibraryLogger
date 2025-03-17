#include "../include/JLogger.h"
#include <iostream>

int JLogger::ID = 0;

JLogger::JLogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pLogger) :ILogger(rcName, pLogger) {
	mID = ID ++;
}


void JLogger::transformNewToOld() {
	std::cout << "J: " << mID << " TRANSFORM\n";
	// call up to parent
	ILogger::transformNewToOld();
}
