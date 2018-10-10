#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>

int main() {

    Intern		Arturo;
    Form*		form;

    form = Arturo.makeForm("RobotomyRequestForm", "hot bots");
    form = Arturo.makeForm("ShrubberyCreationForm", "hot pots");
    form = Arturo.makeForm("PresidentialPardonForm", "hot nots");
    form = Arturo.makeForm("FakestForm", "F4k3lyf3");
    std::cout << "Done Testing" << std::endl;
}