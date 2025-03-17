#include "../include/ILogger.h"
#include "../include/LibraryLoggerFactory.h"

ILogger::ILogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pcLogger)  
{
	mcName = rcName;
	mpcLogger = pcLogger;
}

void ILogger::logStart(const std::string &rcName) {
	mpcLogger = LibraryLoggerFactory::CreateLibraryLogger(rcName, mpcLogger);

}

std::shared_ptr<ILibraryReceiver> ILogger::logStop(const std::string &rcName)
{
	if (mcName == rcName) {
		// stop me!
		// no one will point to me, 
		// the shared pointers will
		// deallocate me!
		return mpcLogger;
	}
		
	mpcLogger = mpcLogger->logStop(rcName);
	// https://en.cppreference.com/w/cpp/memory/enable_shared_from_this
	// DO NOT std::make_shared<ILibraryReceiver>(this);
	return shared_from_this();
}

void ILogger::transformNewToOld() {
	if ( nullptr != mpcLogger) {
		// if we contain an ILogger, 
		// call it.
		mpcLogger->transformNewToOld();
	}
}
