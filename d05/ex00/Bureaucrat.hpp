#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Bureaucrat
{
  private:
	const std::string			_Name;
	int							_Grade;

  public:
	
	class	GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			GradeTooHighException(GradeTooHighException const & rhs);
			GradeTooHighException	&operator = (GradeTooHighException const & rhs);

			virtual ~GradeTooHighException() throw() {};
			
			virtual const char		*what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			GradeTooLowException(GradeTooLowException const & rhs);
			GradeTooLowException	&operator = (GradeTooLowException const & rhs);
			virtual ~GradeTooLowException() throw () {};

			virtual const char		*what() const throw();
	};

	Bureaucrat();
	Bureaucrat(std::string const Name, int Grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();

	// Operators
	Bureaucrat					&operator = (const Bureaucrat &);

	// Methods
	void						incrementGrade(int Grade);
	void						decrementGrade(int Grade);

	// Getters
	std::string	const			getName() const;
	int							getGrade() const;
};

std::ostream					&operator << (std::ostream &lhs, Bureaucrat const &rhs);

#endif