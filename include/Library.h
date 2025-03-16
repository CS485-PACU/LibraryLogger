#include "ILibraryReceiver.h"
#include <memory>
class ILogger;

class Library : public ILibraryReceiver{

	public:
		virtual void transformNewToOld();

		virtual void logStart(const std::string &rcName);
		virtual std::shared_ptr<ILibraryReceiver> logStop(const std::string &rcName);

	private:
		std::shared_ptr<ILogger> mpLogger;
};