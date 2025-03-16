#pragma once
#include "ILibraryReceiver.h"
#include <memory>

class ILogger : public ILibraryReceiver, public std::enable_shared_from_this<ILogger> {

	public:
		ILogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pLogger);
		virtual ~ILogger() {};

		virtual void transformNewToOld() = 0;

		virtual void logStart(const std::string &rcName);
		virtual std::shared_ptr<ILibraryReceiver> logStop(const std::string &rcName);

	private:
		std::shared_ptr<ILibraryReceiver> mpLogger = nullptr;
		std::string mcName;
};