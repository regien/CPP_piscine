#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		std::vector<int>		_vector;

	public:
		Span();
		Span(int n);
		Span(Span const &rhs);

		// OPERATORS
		Span		& operator = (Span const &rhs);

		// METHODS
		void		addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
}

#endif
