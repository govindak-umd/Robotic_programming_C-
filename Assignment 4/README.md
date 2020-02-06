# Group 10 Final_Project

Name: 
Group 10 Final Project

## Code
Please follow the below steps to run our code with MMS simulator.  
*Note*: We have not included the MMS simulator code/binary with our submission.

Add the respective fields with the data as shown below;  
Directory:   
`<path_to_downloaded_project_directory>/FP-Group10/cpp_code`
(Change directory path according to stored project location)   

Build Command:   
`g++ -std=c++14 main.cpp src/LandBasedRobot/landbasedrobot.cpp src/LandBasedTracked/landbasedtracked.cpp src/LandBasedWheeled/landbasedwheeled.cpp src/API/api.cpp src/Maze/maze.cpp  src/Algorithm/algorithm.cpp src/BFSAlgorithm/bfsalgorithm.cpp src/DFSAlgorithm/dfsalgorithm.cpp`   

Run Command:    
`./a.out`

## Documentation

The doxyfile is present in `<path_to_downloaded_project_directory>/FP-Group10/doc/final_project_doxy`.

The submission already includes the html files generated under `<path_to_downloaded_project_directory>/FP-Group10/doc/html/`, however, you can regenreate them by running `doxygen <path_to_downloaded_project_directory>/FP-Group10/doc/final_project_doxy`.
