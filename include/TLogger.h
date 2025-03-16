#include "ILogger.h"
#include <memory>

class TLogger : public ILogger{

	public:
		TLogger();
		virtual void transformNewToOld();

	private:
		static int ID;
		int mID;

};