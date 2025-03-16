#pragma once
#include "ILogger.h"
#include <memory>

class TLogger : public ILogger{

	public:
		TLogger(const std::string &rcName, std::shared_ptr<ILibraryReceiver> pLogger);

		virtual ~TLogger() {};

		virtual void transformNewToOld();

	private:
		static int ID;
		int mID;
};