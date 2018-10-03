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
	*this = value;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(const Fixed &data)
{
	std::cout << "Assignation operator called" << std::endl;
	point_value = data.getRawBits();
	return (*this);
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (point_value);
}

void			Fixed::setRawBits(int const raw)
{
	point_value = raw;
}