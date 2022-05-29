//#include "sed.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;

int main (int argc, char **argv)
{
	if (argc != 4)
		return 0;
	ifstream		file (argv[1]);
	string			s1;
	string			s2;
	string			outwrite;
	string			lineRead;

	s1.append(argv[2]);
	s2.append(argv[3]);

	string			outname = argv[1];
	outname.append(".replace");
	cout << "creating " << outname << endl;
	std::ofstream	out{ outname };

	cout << "writing to " << outname << endl;
	while ( getline (file,lineRead))
	{
		for (size_t i = 0; i < lineRead.size(); i++)
		{
			if (strncmp(lineRead.c_str() + i, argv[3], strlen(argv[3])) == 0)
			{
				i += strlen(argv[3]); 
				outwrite += argv[2];
				i -= 1;
			}
			else
			{
				outwrite.push_back(lineRead[i]);
			}
		}
	}
	out << outwrite;
	cout << "done" << endl;
}
