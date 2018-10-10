#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>

int main() {
	Bureaucrat				Guy("Alan Garcia", 1);
	ShrubberyCreationForm	Re("shrubbery_test");
	RobotomyRequestForm		For("roboto_test");
	PresidentialPardonForm	Ma("Presidential_test");

	std::cout << "<< overload values" << std::endl;
	std::cout << Guy << std::endl;
	std::cout << Re << std::endl;
	std::cout << For << std::endl;
	std::cout << Ma << std::endl;

	std::cout << std::endl;
	std::cout << "Signing tests:" << std::endl;
	Guy.signForm(Re);
	Guy.signForm(For);
	Guy.signForm(Ma);

	std::cout << std::endl;
	std::cout << "Execution test:" << std::endl;
	Guy.executeForm(Re);
	Guy.executeForm(For);
	Guy.executeForm(Ma);

	std::cout << std::endl << "miscalena tests:" << std::endl;
	Bureaucrat				man("Alberto Lopez", 150);
	PresidentialPardonForm	vaina("Reforma_presidential");

	std::cout << man << std::endl;
	std::cout << vaina << std::endl;

	man.executeForm(vaina);

	std::cout << "End of testing" << std::endl;	
}

