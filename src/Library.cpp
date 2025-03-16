#include "../include/Library.h"
#include "../include/ILogger.h"
#include <iostream>
#include "../include/LibraryLoggerFactory.h"

void Library::transformNewToOld() {

		std::cout << "LIBRARY TRANSFORM\n";
		if ( nullptr != mpLogger) {
			// calls down to a subclass
			mpLogger->transformNewToOld();
		}
}


void Library::logStart(const std::string &rcStreamName) {
	mpLogger = LibraryLoggerFactory::CreateLibraryLogger(rcStreamName, mpLogger);
}

std::shared_ptr<ILibraryReceiver> Library::logStop(const std::string &rcStreamName) {
	if ( nullptr != mpLogger) {
		mpLogger = mpLogger->logStop(rcStreamName);
	}
	return mpLogger;
}