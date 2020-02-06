# Assignment_2

## NOTE: This has been tested on codelite platform only! Also, c++11 has been used for development.

### Few sub-notes:
* `Assignment` folder is the workspace folder. It contains `.workspace` file which can be loaded into your codelite environment. 
* Doxygen documentation can be viewed by cloning the repo and navigating to `documentation/docs/html` and open `index.html` in your local browser.
* Every input being asked contains two values: First being row number, second being column number.
* The grid is designed such that (0, 0) is top-left corner of the map. row and column indices increase downwards (row) and towards right (column).
* Code is designed to accept both ( ) i.e. freespace and (.) i.e. dot as input from map. However, obstacle has to be (#).

## Execution Note!
### Input file is by default taken from `Assignment` directory i.e. it has been coded with relative path.
### If the existing code does not work (i.e. input file error!), please change the following and run the code.
* line #160 in `main.cpp` where `std::string path` has been defined. Change the value to path in your system before executing the code. (Please specify absolute path!)

## Sample execution:
Few observations:
* \# corresponds to obstacle
* \+ corresponds to partial (when goal is not reached), else path to goal (G) from start (S) node.
![Sample output](https://github.com/ENPM809Y-Fall2019-Group10/Assignment_2/blob/rachith/sample_output.png)
