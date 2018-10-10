#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern
{
	public:
		
		class FormException : public std::exception
		{
			public:
			
			FormException() {};
			FormException(FormException const &rhs);
			virtual ~FormException() throw() {};

			// OPERATORS
			FormException		&operator = (FormException const & rhs);
			
			virtual const char*	what() const throw();
		};

		Intern() {};
		Intern(Intern const &rhs);
		~Intern() {};

		// OPERATORS
		Intern					&operator = (Intern const &rhs);

		// METHODS
		Form					*makeForm(std::string Name, std::string Target);
};

#endif

