#include "../include/ILogger.h"
#include "../include/LibraryLoggerFactory.h"

ILogger::ILogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pLogger)  
{
	mcName = rcName;
	mpLogger = pLogger;
}

void ILogger::logStart(const std::string &rcName) {
	mpLogger = LibraryLoggerFactory::CreateLibraryLogger(rcName, mpLogger);

}

std::shared_ptr<ILibraryReceiver> ILogger::logStop(const std::string &rcName)
{
	if (mcName == rcName) {
		// stop me!
		// no one will point to me, 
		// the shared pointers will
		// deallocate me!
		return mpLogger;
	}
		
	mpLogger = mpLogger->logStop(rcName);
	return shared_from_this();
}

void ILogger::transformNewToOld() {
	if ( nullptr != mpLogger) {
		// if we contain an ILogger, 
		// call it.
		mpLogger->transformNewToOld();
	}
}
