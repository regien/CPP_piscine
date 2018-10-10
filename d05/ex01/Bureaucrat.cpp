#include "Bureaucrat.hpp"

// EXCEPTIONS

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rhs) {
	*this = rhs;
}

Bureaucrat::GradeTooHighException		&Bureaucrat::GradeTooHighException::operator = (GradeTooHighException const &rhs) {
	(void)rhs;
	return (*this);
}

const char		*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}


Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &rhs) {
	*this = rhs;
}

Bureaucrat::GradeTooLowException		&Bureaucrat::GradeTooLowException::operator = (GradeTooLowException const &rhs) {
	(void)rhs;
	return *this;
}

const char		*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

// CONSTRUCTORS

Bureaucrat::Bureaucrat() :
_Name("Someone"), _Grade(42) {}

Bureaucrat::Bureaucrat(std::string const Name, int Grade):
_Name(Name) {
	if (Grade <= 0) {
		throw Bureaucrat::GradeTooHighException();
	} else if (Grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else
		_Grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) {
	*this = rhs;
}

Bureaucrat::~Bureaucrat() {}

/*
** const_cast because it's directly modifying a variable (not necessarilly private)
** but a const, so it's taking to reference to actually modify it
*/

Bureaucrat						&Bureaucrat::operator = (Bureaucrat const &rhs) {
	std::string			&test = const_cast<std::string&>(_Name);

	test = rhs._Name;
	_Grade = rhs._Grade;
	return (*this);
}

// GETTERS

std::string	const				Bureaucrat::getName() const {
	return (_Name);
}

int								Bureaucrat::getGrade() const {
	return (_Grade);
}

// METHODS

void							Bureaucrat::incrementGrade(int n) {
	if (_Grade - n <= 0) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_Grade -= n;
	}
}

void							Bureaucrat::decrementGrade(int n) {
	if (_Grade + n > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_Grade += n;
	}
}

void							Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << _Name << " signs " << form.getName() << std::endl;
	} catch(std::exception &error) {
		std::cout << _Name << " cannot signs " << form.getName() << " because "
				  << error.what() << std::endl;
	}
}

// OPERATORS

std::ostream					&operator << (std::ostream &lhs, Bureaucrat const &rhs) {
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (lhs);
}

