/*! \mainpage Welcome!
 * 
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include "include/scenario.h"
#include <limits>

// Function Prototypes
/**  @brief Function to read the maze from the input file. */
void readMap(std::string, Scenario* );
/**  @brief Function to read inputs from user. */
void askStartGoalLocations(int&, int&, int&, int&, Scenario*);
/**  @brief Recursive loop to find path to goal and backtrack! */
bool findPath(int, int, const int&, const int&, Scenario*);


/**  
	*  @details
	*  Reads file from the input location and stores in a binary/numeric map.
	*  Several things to be taken note of here:
	*  1. (#) - obstacle, written as 0 to the map
	*  2. ( ) - free-space, written as 1 to the map
	*  @param path  input file location. Please provide absolute path.
	*  @param maze	map where numeric values corresponding to input file is stored.
	*  @return	Void.
	*/
void readMap(std::string path, Scenario* maze)
{
	std::string line; 	// each line in file	
	std::ifstream myFile (path); // file to be read
	
	if (myFile.is_open())
	{	
		int lineNumber = 0;
		while (getline (myFile,line))
		{			
			// Start reading the line
			int characterNum = 0;
			for (char c : line)
			{
				if ( c == '#' )
				{
					maze->constructScenario(lineNumber, characterNum, 0);
				}
				else if ( c == '.' || c == ' ')
				{
					maze->constructScenario(lineNumber, characterNum, 1);
				}
				characterNum++;
			}
			lineNumber++;
		}
		myFile.close();
	}
	else std::cout << "Unable to open the file" << "\n";
}

/**  
	*  @details
	*  User inputs start locations (row, col) == (startx, starty) and end locations (goalx, goaly).
	*  Until user inputs a valid location, user is promted to re-enter the coordinates.
	*  @param startX	start location's row.
	*  @param startY	start location's column.
	*  @param goalX	goal location's row.
	*  @param goalY	goal location's column.
	*  @param maze	Maze/Map of the environment.
	*  @return	Void.
	*/
void askStartGoalLocations(int& startX, int& startY, int& goalX, int& goalY, Scenario* maze)
{
	// Read Start point
	std::cout << "Enter the 'Start' location in the row,column format" << "\n";
	bool startFlag = true;
	do{
		std::cin >> startX >> startY;		
		if ( std::cin.fail() || not maze->checkValidLocation(startX, startY) )		// Check validity location of the input
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cerr << "Input location is invalid. Please re-enter valid input location." << "\n";
			std::cerr << "Note: Input location must be within " << "[0-" << maze->getLength()-1 << "," << "0-" << maze->getWidth()-1 << "], inclusive." << "\n";
			startFlag = false;
		}
		else startFlag = true;
		
	}while ( not startFlag );
	
	// Read Goal point
	std::cout << "Enter the 'Goal' location in the row,column format" << "\n";
	bool goalFlag = true;
	do{
		std::cin >> goalX >> goalY;
		if ( std::cin.fail() || not maze->checkValidLocation(goalX, goalY) )		// Check validity location of the input
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Input location is invalid. Please re-enter valid input location." << "\n";
			std::cout << "Note: Input location must be within " << "[0-" << maze->getLength()-1 << "," << "0-" << maze->getWidth()-1 << "], inclusive." << "\n";
			goalFlag = false;
		}
		else goalFlag = true;
	}while ( not goalFlag );
	
	std::cout << "Cool!, Now Let's see how to navigate!" << "\n";
}

/**  
	*  @details
	*   Follows a heuristic algorithm of navigating in the following order
	*	from any location. Explores North, East, South and West.
	* 
	*  @param x	start/current location's row.
	*  @param y	start/current location's column.
	*  @param gx	goal location's row.
	*  @param gy	goal location's column.
	*  @param maze	Maze/Map of the environment.
	*  @return	Final return is true when goal node is reached, else false.
	*/
bool findPath(int x, int y, const int& gx, const int& gy, Scenario* maze)
{
	if ( x==gx && y==gy ) return true;		// Check if location is at Goal
	
	if ( not maze->checkValidLocation(x, y) ) return false;		// Check validity of x, y
	
	maze->markLocation(x, y, 2);		// Mark traversed point
	
//	maze->printScenario(); std::cout << "\n";
	
	if ( findPath(x-1, y, gx, gy, maze) ) return true;	 // North move
	
	if ( findPath(x, y+1, gx, gy, maze) ) return true;	 // East move
	
	if ( findPath(x+1, y, gx, gy, maze) ) return true;	 // South move
	
	if ( findPath(x, y-1, gx, gy, maze) ) return true;	 // West move
	
	maze->markLocation(x, y, 3);		// Mark ineligible point
	
	return false;
}

/**  
	*  @brief Main function that handles entire flow of the algorithm.
	*  @details
	*   The flow is as follows:
	* 	1. read the input path location from user.
	*   2. read the map present in the input location.
	*   3. read start and goal location from user.
	*   4. run algorithm to find a path.
	*   5. print the result of the algorithm - maze.
	*  @return	0;
	*/
int main()
{
	
//	std::string path = "/home/rachith/git/ENPM809Y/Assignment_2/Assignment/maze.txt";
	std::string path = "../../maze.txt";
	
	Scenario maze; 				// Define a maze object
	readMap(path, &maze);		// Creating a layout for maze in binary format; 1-free space, 0-obstacle
		
	maze.printScenario();		// Print the maze read from file for verification!!
	
	int startX{1}, startY{1}, goalX{1}, goalY{4};		// Define start and goal variables
	
	askStartGoalLocations(startX, startY, goalX, goalY, &maze);		// Collect start and goal locations from user
	
	bool goalReached = false;
	
	if ( findPath(startX, startY, goalX, goalY, &maze) ){
		std::cout << "Goal Reached!!" << "\n";
		goalReached = true;
	}
	else std::cout << "Unfortunately 'Path Not Found' :( ... Better luck next time ;)" << "\n";
	
	maze.markLocation(startX, startY, 5);		// Mark Start Point
	maze.markLocation(goalX, goalY, 6);		// Mark Goal Point

	maze.printFinalScenario(goalReached);	// Print the maze after navigation!!
	
	return 0;
}