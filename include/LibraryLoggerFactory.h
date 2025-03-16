
#pragma once

#include <string>
#include <memory>
class ILogger;
class ILibraryReceiver;

class LibraryLoggerFactory {
	public:
		static std::shared_ptr<ILogger> CreateLibraryLogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pcLogger);
};