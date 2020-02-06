#include "include/scenario.h"
#include <iostream>

/**  
	*  @brief Construct a scenario with maze.
	*  @details Values are being stored in a map.
	* 
	*  @param x	row position on the map
	*  @param y	column position on the map
	*  @param val value to be stored at (x, y)
	*  @return	Void. Since, values are written to private variable.
*/
void Scenario::constructScenario(int x, int y, int val)
{
	maze[x][y] = val;
}

/**  
	*  @brief Get length of the map.
	*  @return	length or number of rows in the map.
*/
int Scenario::getLength()
{
	return maze.size();
}

/**  
	*  @brief Get Width of the map.
	*  @return	width or number of columns in the map.
*/
int Scenario::getWidth()
{
	return maze.at(0).size();
}

/**  
	*  @brief Check validity of a location.
	*  @details Maze has several places as obstacles. These values should return a false.
	*  Also, boundary conditions are checked along with previous explored area.\n
	*  Here, 0 -> obstacle,\n
	*  2 -> already visited node,\n
	*  3 -> node from where no exploration is feasible.
	* 
	*  @param x	row position on the map
	*  @param y	column position on the map
	*  @return	True/False based on whether the input location is valid or not.
*/
bool Scenario::checkValidLocation(int x, int y)
{
	if ( x>getLength()-1 || x<0 || y>getWidth()-1 || y<0 || maze[x][y]==0 || maze[x][y]==2 || maze[x][y]==3) return false;
	return true;
}

/**  
	*  @brief Mark certain locations as valid/explored.
	*  @details Maze has several kinds of locations. Obstacles, explored area, non-feasible area, and free-space.\n
	*  Here, 0 -> obstacle,\n
	*  1 -> free-space,\n
	*  2 -> already visited node,\n
	*  3 -> node from where no exploration is feasible,\n
	*  5 -> start node,\n
	*  6 -> end node.
	* 
	*  @param x	row position on the map
	*  @param y	column position on the map
	*  @param z value to be stored at (x, y) location
	*  @return	Void.
*/
void Scenario::markLocation(int x, int y, int z)
{
	maze[x][y] = z;
}

/**  
	*  @brief Print maze.
	*  @details Used for debugging at intermediate steps.
	*  This prints map with binary encoding as implemented in @see Scenario::markLocation
	* 
	*  @return	Void.
*/
void Scenario::printScenario()
{
	for(auto it = maze.begin(); it != maze.end(); ++it)
	{
		for (auto jt = it->second.begin() ; jt != it->second.end(); ++jt)
		{
			std::cout << maze[it->first][jt->first] << " ";
		}
		std::cout << "\n";
	}
}

/**  
	*  @brief This function prints final maze.
	*  @details Once all the navigation is completed, irrespective of success/failure, this function is called to print the final result.
	*  This prints map with the same format as input characeters along with traversed path with a '+' character.\n
	*  (#) -> obstacle,\n
	*  ( ) -> unexplored free-space,\n
	*  (+) -> explored location,\n
	*  (S) -> Start node,\n
	*  (G) -> Goal node.\n
	*  If goal is reached, only the path leading to goal is printed, else partial path is printed.
	*  @param goalReached value indicating if the goal is reached or not.
	*  @return	Void.
*/
void Scenario::printFinalScenario(bool goalReached)
{
	for(auto it = maze.begin(); it != maze.end(); ++it)
	{
		for (auto jt = it->second.begin() ; jt != it->second.end(); ++jt)
		{
			switch ( maze[it->first][jt->first] )
			{
				case 0 : std::cout << "# "; break;
				case 1 : std::cout << "  "; break;
				case 2 : std::cout << "+ "; break;
				case 3 : if ( not goalReached ) std::cout<<"+ "; else std::cout<<"  "; break;
				case 5 : std::cout << "S "; break;
				case 6 : std::cout << "G "; break;
			}
		}
		std::cout << "\n";
	}
}