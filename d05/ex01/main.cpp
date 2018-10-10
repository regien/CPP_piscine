#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
int	main(void)
{
	Bureaucrat		guy("Alan Garcia", 50);

	std::cout << guy << std::endl;
	while (true) {
		try {
			guy.incrementGrade(5);
		} catch (std::exception &err) {
			std::cerr << err.what() << std::endl;
			break;
		}
		std::cout << guy << std::endl;
	}
	std::cout << "HIGH DONE" << std::endl;

	Bureaucrat		man("Simon Martinez", 100);
	while (true) {
		try {
			man.decrementGrade(5);
		} catch(std::exception &err) {
			std::cerr << err.what() << std::endl;
			break ;
		}
		std::cout << man << std::endl;
	}
	std::cout << "LOW DONE" << std::endl;
}
*/

int main(void)
{
	Bureaucrat		guy("Alan Garcia", 50);
	Form			reforma("Agraria", 150, 120);
	
	std::cout << "printing information:" << std::endl;
	std::cout << guy << std::endl;
	std::cout << reforma << std::endl;

	guy.signForm(reforma);

	std::cout << std::endl << "printing the false return one"
			  << std::endl;
	Bureaucrat		Alberto("Random Naisa", 150);
	Form			Indulto("Indulto", 6, 4);

	std::cout << Alberto << std::endl;
	std::cout << Indulto << std::endl;

	Alberto.signForm(Indulto);
}