#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class	Fixed
{
	private:
		int					_point_value;
		static const int	_frac_bits;
	
	public:
		Fixed();
		Fixed(const Fixed &value);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		
		Fixed				&operator=(const Fixed &data);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat() const;
		int					toInt() const;
};

std::ostream				&operator<<(std::ostream &out, const Fixed &data);

#endif