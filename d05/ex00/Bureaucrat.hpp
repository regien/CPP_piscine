#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Bureaucrat
{
  private:
	const std::string			_Name;

  public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();

	// operators
	Bureaucrat					&operator = (const Bureaucrat &);

	// getters
	std::string					getName();
	std::string					getGrade();

	// setters
	void						setName();
	void						setGrade();
};

#endif