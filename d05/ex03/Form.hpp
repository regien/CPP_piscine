#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
	std::string const		_Name;
	int const				_GradeToSign;
	int const				_GradeToExec;
	bool					_Signed;

  public:
	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const &rhs);
		GradeTooHighException				&operator=(GradeTooHighException const &rhs);

		virtual ~GradeTooHighException()	throw() {};

		virtual const char *what() const	throw();
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const &rhs);
		GradeTooLowException				&operator=(GradeTooLowException const &rhs);
		virtual ~GradeTooLowException()		throw(){};

		virtual const char *what() const	throw();
	};

	class NotSignedFormException : public std::exception
	{
	  public:
		NotSignedFormException();
		NotSignedFormException(NotSignedFormException const &rhs);
		NotSignedFormException				&operator=(NotSignedFormException const &rhs);
		virtual ~NotSignedFormException()	throw(){};

		virtual const char *what() const	throw();
	};

	Form();
	Form(std::string Name, int GradeToSign, int GradeToExec);
	Form(Form const &copy);
	virtual ~Form();

	// Operators
	Form						&operator = (const Form &);

	// Methods
	void						beSigned(Bureaucrat & target);
	virtual void				execute(Bureaucrat const &executor) const;

	// Getters
	std::string	const			getName() const;
	int							getGradeToSign() const;
	int							getGradeToExec() const;
	bool						getSigned() const;
};

std::ostream					&operator << (std::ostream &lhs, Form const &rhs);

#endif