#pragma once
#include "ILibraryReceiver.h"
#include <memory>
class ILogger;

class Library : public ILibraryReceiver{

	public:
		virtual ~Library(){};
		
		virtual void transformNewToOld();

		virtual void logStart(const std::string &rcName);
		virtual std::shared_ptr<ILibraryReceiver> logStop(const std::string &rcName);

	private:
		std::shared_ptr<ILibraryReceiver> mpcLogger = nullptr;
};