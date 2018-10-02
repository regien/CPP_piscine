#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class	Fixed
{
	private:
		int					point_value;
		static const int	frac_bits;
	
	public:
		Fixed();
		Fixed(const Fixed &value);
		~Fixed();
		
		Fixed & 			operator=(const Fixed &data);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		
		
		//copy constructor;
//		Fixed(const Fixed &copy);
		
		
		
};

#endif