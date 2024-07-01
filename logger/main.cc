#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;

enum LogLevel {INFO, WARNING, DEBUG, ERROR, CRITICAL};

class Logger {
	public:
		Logger(const string& filename) {
			logFile.open(filename, ios::app);
			if(!logFile.is_open()) {
				cerr << "Error opening log file."<<endl;
			}
		}
		~Logger() {
			logFile.close();
		}
		void log(LogLevel level, const std::string& message) {
			time_t now = time(0);
			tm* timeinfo = localtime(&now);
			char timestamp[20];
			strftime(timestamp, sizeof(timestamp),
				"%Y-%m-%d %H:%M:%s", timeinfo);
			ostringstream logEntry;
			logEntry << "[" << timestamp << "]"
				<< levelToString(level) <<": "<< message
				<< endl;
			cout << logEntry.str();
			if(logFile.is_open()) {
				logFile<<logEntry.str();
				logFile.flush();
			}
			return;
		}
	private:
		ofstream logFile;
		string levelToString(LogLevel level) {
			switch(level) {
				case DEBUG:
					return "DEBUG";
				case INFO:
					return "INFO";
				case WARNING:
					return "WARNING";
				case ERROR:
					return "ERROR";
				case CRITICAL:
					return "CRITICAL";
				default:
					return "UNKNOWN";
			}
		}
};

int main() {
	Logger logger("logfile.txt");
	logger.log(INFO, "Program started.");
	logger.log(DEBUG, "Debugging information.");
	logger.log(ERROR, "An error occurred");
	return 0;
}
