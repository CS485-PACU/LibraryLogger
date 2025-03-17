#pragma once
#pragma once
#include "ILogger.h"
#include <memory>

class JLogger : public ILogger{

	public:
		JLogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pcLogger);

		virtual ~JLogger() {};

		virtual void transformNewToOld();

	private:
		static int ID;
		int mID;
};