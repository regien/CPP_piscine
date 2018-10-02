#include "Fixed.hpp"

const int		Fixed::frac_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	point_value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(value.point_value);
//	point_value = value.point_value;
}

Fixed::~Fixed() {}

Fixed & Fixed::operator=(const Fixed &data)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(data.point_value);
	
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (point_value);
}

void			Fixed::setRawBits(int const raw)
{
	point_value = raw;
//	std::cout << "Assignation operator called" << std::endl;
}