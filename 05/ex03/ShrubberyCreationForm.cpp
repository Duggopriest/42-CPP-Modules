#include "ShrubberyCreationForm.h"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Standard constructor for ShrubberyCreationForm called\n";
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145,137), target("")
{
	std::cout << "Default constructor for ShrubberyCreationForm called\n";
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form("ShrubberyCreationForm", 145, 137), target(src.getTarget())
{
	std::cout << "Copy constructor for ShrubberyCreationForm called\n";
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Distructor for ShrubberyCreationForm called\n";
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << "Assignment operator for ShrubberyCreationForm called\n";
	rhs.getName();
	return *this;
}

const std::string	&ShrubberyCreationForm::getTarget() const
{
	return this->target;
}


void	ShrubberyCreationForm::execute( const Bureaucrat &executor ) const
{
	std::ofstream	myfile;
	std::string		fileName = this->target + "_shrubbery";
	this->checkExecutability(executor);
	myfile.open(fileName.c_str(), std::ios::out);
	myfile << "      ,.," << std::endl;
	myfile << "      MMMM_    ,..," << std::endl;
	myfile << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
	myfile << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
	myfile << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
	myfile << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
	myfile << "        ,., _\"__ \\__./ .\"" << std::endl;
	myfile << "       MMMMM_\"  \"_    ./" << std::endl;
	myfile << "        ''''      (    )" << std::endl;
	myfile << " ._______________.-'____\"---._." << std::endl;
	myfile << "  \\                          /" << std::endl;
	myfile << "   \\________________________/" << std::endl;
	myfile << "   (_)                    (_)" << std::endl;
	myfile.close();
	std::cout << "Created the shrug in " << this->target << "_shrubbery"
		<< std::endl;
}