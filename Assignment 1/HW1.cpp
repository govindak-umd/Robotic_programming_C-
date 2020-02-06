#include <iostream>
#include <array>
#include <string>
#include <vector>

int main()
{
	std::cout <<"\n";
	std::cout <<"--------------------------- Group 10-Assignment 1 -----------------------------"<<std::endl<<"\n"; 
	
	//Creating and initializing the 2Darray
	std::array<std::array<std::string, 2>, 3> array_2d =
	{{{"blue","white"},
	{"green","white"},
	{"green","white"}}};
	
	//Creating three different 1d vector
	std::vector <std::string> color_vec1(2);
	std::vector <std::string> color_vec2(2);
	std::vector <std::string> color_vec3(2);
	
	//Reading the 2D array and storing the values of each row in a vector
	int i;
	for (i=0;i<2;i++)
	{
		color_vec1[i] = array_2d[0][i];
	}
	for (i=0;i<2;i++)
	{
		color_vec2[i] = array_2d[1][i];
	}
	for (i=0;i<2;i++)
	{
		color_vec3[i] = array_2d[2][i];
	}
	
	//Creating three strings to store the input values from user
	std::string x,y,z;
	
	std::cout <<"Enter the three missing peg color from the picture of the tray: ";
	std::cin >> x >> y >> z;
	std::cout << std::endl;

	//Inserting 'PEG' colors into respective places in vectors
	color_vec1.push_back(x);
	color_vec2.insert(color_vec2.begin(),y);
	color_vec3.insert(color_vec3.begin()+1,z);

	//Showing vector's content in Output Console:
	std::cout << "---------------The elements of each Vector is: ------------------" << std::endl<<"\n";
	std::cout << "Vector 1: " <<color_vec1.at(0) << ' ' <<color_vec1.at(1)<< ' ' << color_vec1.at(2) << std::endl;
	std::cout << "Vector 2: " <<color_vec2.at(0) << ' ' <<color_vec2.at(1)<< ' ' << color_vec2.at(2) << std::endl;
	std::cout << "Vector 3: " <<color_vec3.at(0) << ' ' <<color_vec3.at(1)<< ' ' << color_vec3.at(2) << std::endl;

	//Creating and Initializing the 2D vector:
	std::vector<std::vector<std::string>> color_vec_2d=
	{{color_vec1.at(0),color_vec1.at(1),color_vec1.at(2)},
	{color_vec2.at(0),color_vec2.at(1),color_vec2.at(2)},
	{color_vec3.at(0),color_vec3.at(1),color_vec3.at(2)}};
	std::cout << std::endl;

	//Displaying the size of 2D vector in console:
	std::cout << "---------------Displaying the size of 2D vector in console ------------------" << std::endl << "\n";
	std::cout << "Number of vectors in the 2D vector 'color_vec_2d' is: "<<color_vec_2d.size() << std::endl;
	std::cout << "Total size of the 2D vector 'color_vec_2d' is: "<<color_vec_2d.size()*color_vec_2d[0].size() << std::endl << "\n";
	
	//Reading and Displaying the 2D vector in output:
	std::cout <<"---------------The Content of the 2D vector is : -----------------"<<std::endl<<"\n";
	for (uint i=0;i<color_vec_2d.size();i++)
	{
		for (uint j=0;j<color_vec_2d[0].size();j++)
		{
			std::cout << color_vec_2d[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}
