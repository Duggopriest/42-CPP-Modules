//#include "sed.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void	replacestr(char *str, std::string rep)
{
	for (int i = 0; i < (int)rep.size(); i++)
		str[i] = rep[i];
}

char ***find_strs(char *strptr, std::string s1, std::string s2)
{
	char	***rtn;
	std::string	str = strptr;
	int		c1 = 0;
	int		c2 = 0;

	rtn = (char ***)malloc(2);
	rtn[0] = (char **)malloc(str.size());
	rtn[1] = (char **)malloc(str.size());
	for (int i = 0; i < (int)str.size(); i++)
	{
		for (int j = 0; str[j] == s1[j]; j++)
			if (j == (int)s1.size())
				rtn[0][c1++] = &strptr[i];
		for (int j = 0; str[j] == s2[j]; j++)
			if (j == (int)s2.size())
				rtn[1][c2++] = &strptr[i];
	}
	rtn[0][c1] = NULL;
	rtn[0][c2] = NULL;
	return (rtn);
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return 0;
	ifstream		file (argv[1]);
	string			s1 = argv[2];
	string			s2 = argv[3];


	string			outname = argv[1];
	outname.append(".replace");
	cout << "creating " << outname << endl;
	std::ofstream	out{ outname };

	string	line;
	char ***p;

	cout << "writing to " << outname << endl;
	while ( getline (file,line))
	{
		p = find_strs(&line, s1, s2);
		for (int i = 0; p[0][i]; i++)
			replacestr(p[0][i], s1);
		for (int i = 0; p[1][i]; i++)
			replacestr(p[1][i], s2);
		out << line << '\n';
	}
}

// int main () {
//   string line;
//   ifstream myfile ("text");
//   if (myfile.is_open())
//   {
//     while ( getline (myfile,line) )
//     {
//       cout << line << '\n';
//     }
//     myfile.close();
//   }

//   else cout << "Unable to open file"; 

//   return 0;
// }

// int	main()
// {
// 	std::ofstream o("Hello.txt");

//   	o << "Hello, World\n" << std::endl;

//   return 0;
// }