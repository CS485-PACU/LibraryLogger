#include "../include/ILogger.h"
#include "../include/LibraryLoggerFactory.h"

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
