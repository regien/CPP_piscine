#include "Form.hpp"

// EXCEPTIONS

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &rhs) {
	*this = rhs;
}

Form::GradeTooHighException		&Form::GradeTooHighException::operator = (GradeTooHighException const &rhs) {
	(void)rhs;
	return (*this);
}

const char		*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}


Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &rhs) {
	*this = rhs;
}

Form::GradeTooLowException		&Form::GradeTooLowException::operator = (GradeTooLowException const &rhs) {
	(void)rhs;
	return *this;
}

const char		*Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

Form::NotSignedFormException::NotSignedFormException() {}

Form::NotSignedFormException::NotSignedFormException(NotSignedFormException const &rhs) {
	*this = rhs;
}

Form::NotSignedFormException		&Form::NotSignedFormException::operator = (NotSignedFormException const &rhs) {
	(void)rhs;
	return *this;
}

const char		*Form::NotSignedFormException::what() const throw() {
	return ("Grade too low");
}

// CONSTRUCTORS

Form::Form() :
_Name("Someone"), _GradeToSign(42), _GradeToExec(42), _Signed(false) {}

Form::Form(std::string Name, int GradeToSign, int GradeToExec):
_Name(Name), _GradeToSign(GradeToSign), _GradeToExec(GradeToExec), _Signed(false) {
	if (GradeToSign <= 0 || GradeToExec <= 0) {
		throw Form::GradeTooHighException();
	} else if (GradeToSign > 150 || GradeToExec > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(Form const &rhs) :
_Name(rhs._Name),
_GradeToSign(rhs._GradeToSign),
_GradeToExec(rhs._GradeToExec),
_Signed(rhs._Signed) {
	*this = rhs;
}

Form::~Form() {}

/*
** const_cast because it's directly modifying a variable (not necessarilly private)
** but a const, so it's taking to reference to actually modify it
*/

Form						&Form::operator = (Form const &rhs) {
	std::string			&test = const_cast<std::string&>(_Name);
	int					&sign_refer = const_cast<int&>(_GradeToSign);
	int					&sign_exec = const_cast<int&>(_GradeToExec);

	test = rhs._Name;
	sign_refer = rhs._GradeToSign;
	sign_exec = rhs._GradeToExec;
	return (*this);
}

// GETTERS

std::string	const				Form::getName() const {
	return (_Name);
}

int								Form::getGradeToSign() const {
	return (_GradeToSign);
}

int								Form::getGradeToExec() const {
	return (_GradeToExec);
}

bool							Form::getSigned() const {
	return (_Signed);
}

// METHODS

void							Form::beSigned(Bureaucrat & target) {
	if (_GradeToSign < target.getGrade()) {
		throw Form::GradeTooLowException();
	}
	_Signed = true;
}

void							Form::execute(Bureaucrat const &executor) const{
	if (getSigned() == false) {
		throw Form::NotSignedFormException();
	} else if (getGradeToExec() < executor.getGrade()) {
		throw Form::GradeTooLowException();
	}
}

// OPERATORS

std::ostream					&operator << (std::ostream &lhs, Form const &rhs) {
	lhs	<< "STATE OF THE FORM `" << rhs.getName() << "` :" << std::endl
		<< "\tGrade to Sign : " << rhs.getGradeToSign() << std::endl
		<< "\tGrade to Exec : " << rhs.getGradeToExec() << std::endl;
	return (lhs);
}

