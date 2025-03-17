#include "../include/Library.h"
#include "../include/ILogger.h"
#include <iostream>
#include "../include/LibraryLoggerFactory.h"

void Library::transformNewToOld() {

		std::cout << "LIBRARY TRANSFORM\n";
		if ( nullptr != mpcLogger) {
			// calls down to a subclass
			mpcLogger->transformNewToOld();
		}
}


void Library::logStart(const std::string &rcStreamName) {
	mpcLogger = LibraryLoggerFactory::CreateLibraryLogger(rcStreamName, mpcLogger);
}

std::shared_ptr<ILibraryReceiver> Library::logStop(const std::string &rcStreamName) {
	if ( nullptr != mpcLogger) {
		mpcLogger = mpcLogger->logStop(rcStreamName);
	}
	return mpcLogger;
}