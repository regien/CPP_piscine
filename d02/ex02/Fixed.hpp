#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class	Fixed
{
	private:
		int					_point_value;
		static const int	_frac_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &value);
		Fixed(const int &);
		Fixed(const float &);
		~Fixed();
		
		Fixed				&operator =	(const Fixed &data);
		Fixed				&operator -- ();
		Fixed				&operator ++ ();
		Fixed				operator ++ (int value);
		Fixed				operator -- (int vlaue);
		Fixed				operator + (const Fixed &data) const;
		Fixed				operator - (const Fixed &data) const;
		Fixed				operator * (const Fixed &data) const;
		Fixed				operator / (const Fixed &data) const;
		bool				operator >	(const Fixed &data) const;
		bool				operator >=	(const Fixed &data) const;
		bool				operator <	(const Fixed &data) const;
		bool				operator <=	(const Fixed &data) const;
		bool				operator ==	(const Fixed &data) const;
		bool				operator !=	(const Fixed &data) const;


		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat() const;
		int					toInt() const;

		static Fixed		const &max(const Fixed &foo, const Fixed &bar);
		static Fixed		&max(Fixed &foo, Fixed &bar);
		static Fixed		const &min(const Fixed &foo, const Fixed &bar);
		static Fixed		&min(Fixed &foo, Fixed &bar);
};

std::ostream				&operator<<(std::ostream &out, const Fixed &data);

#endif