#include <string>

class ILibraryReceiver {

	public:
		virtual void transformNewToOld() = 0;

		virtual void logStart(const std::string &rcName) = 0;
		virtual std::shared_ptr<ILibraryReceiver> logStop(const std::string &rcName) = 0;

};