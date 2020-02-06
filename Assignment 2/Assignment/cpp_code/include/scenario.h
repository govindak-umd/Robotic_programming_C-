#ifndef ENVIRONMENT
#define ENVIRONMENT

#include <map>

class Scenario{
private:
	std::map<int, std::map<int, int>> maze;
public:
	void constructScenario(int, int, int);
	int getLength();
	int getWidth();
	bool checkValidLocation(int, int);
	void markLocation(int, int, int);
	void printScenario();
	void printFinalScenario(bool);
};

/*! \class Scenario scenario.h "include/scenario.h"
 *  \brief Defines the structure of the maze along with functions supporting it.
 *	@details This is the base of the algorithm. Several functions to perform certain tasks on the map is defined here.
 *  \headerfile scenario.h
 */
#endif