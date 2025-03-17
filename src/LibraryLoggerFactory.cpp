#include "../include/TLogger.h"
#include "../include/JLogger.h"
#include "../include/ILogger.h"
#include "../include/ILibraryReceiver.h"
#include "../include/LibraryLoggerFactory.h"


std::shared_ptr<ILogger> LibraryLoggerFactory::CreateLibraryLogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pcLogger) {
	std::shared_ptr<ILogger> pcNewLogger;

	if (rcName.ends_with(".txt")) {
		pcNewLogger = std::make_shared<TLogger>(rcName, pcLogger);
	}	else if (rcName.ends_with(".json")) {
		pcNewLogger = std::make_shared<JLogger>(rcName, pcLogger);
	}
	return pcNewLogger;
}