#include "../include/LibraryLoggerFactory.h"
#include "../include/TLogger.h"
#include "../include/JLogger.h"

std::shared_ptr<ILogger> LibraryLoggerFactory::CreateLibraryLogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pcLogger) {
	std::shared_ptr<ILogger> pcNewLogger;

	if (rcName.ends_with(".txt")) {
		pcNewLogger = std::make_shared<TLogger>(rcName, pcLogger);
	}

	return pcNewLogger;
}