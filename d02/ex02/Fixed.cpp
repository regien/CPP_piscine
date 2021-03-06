#include "Fixed.hpp"

Fixed::Fixed()
{
	_point_value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int &value)
{
	_point_value = value << _frac_bits;
}

Fixed::Fixed(float const &value) :
_point_value(roundf(value * (1 << _frac_bits))) {}

Fixed::~Fixed() {}

Fixed			&Fixed::operator =	(const Fixed &data)
{
	_point_value = data.getRawBits();
	return (*this);
}

Fixed			&Fixed::operator -- ()
{
	_point_value--;
	return(*this);
}

Fixed			&Fixed::operator ++ ()
{
	_point_value++;
	return(*this);
}

Fixed			Fixed::operator ++ (int)
{
	Fixed	holder =  *this;
	++(*this);
	return (holder);
}

Fixed			Fixed::operator -- (int)
{
	Fixed	holder = *this;
	--(*this);
	return (holder);
}

Fixed			Fixed::operator +	(const Fixed &data) const
{
	return (Fixed(toFloat() + data.toFloat()));
}

Fixed			Fixed::operator -	(const Fixed &data) const
{
	return (Fixed(toFloat() - data.toFloat()));
}

Fixed			Fixed::operator *	(const Fixed &data) const
{
	return (Fixed(toFloat() * data.toFloat()));
}

Fixed			Fixed::operator /	(const Fixed &data) const
{
	return (Fixed(toFloat() / data.toFloat()));
}

bool			Fixed::operator >	(const Fixed &data) const
{
	return (_point_value > data._point_value);
}

bool			Fixed::operator >=	(const Fixed &data) const
{
	return (_point_value >= data._point_value);
}

bool			Fixed::operator <	(const Fixed &data) const
{
	return (_point_value < data._point_value);
}


bool			Fixed::operator <=	(const Fixed &data) const
{
	return (_point_value <= data._point_value);
}

bool			Fixed::operator ==	(const Fixed &data) const
{
	return (_point_value == data._point_value);
}

bool			Fixed::operator !=	(const Fixed &data) const
{
	return (_point_value != data._point_value);
}


int				Fixed::getRawBits(void) const
{
	return (_point_value);
}

void			Fixed::setRawBits(int const raw)
{
	_point_value = raw;
}

float			Fixed::toFloat() const
{
	float		holder = (float)_point_value;

	holder /= (1 << _frac_bits);
	return (holder);
}

int				Fixed::toInt() const
{
	return (_point_value >> _frac_bits);
}


Fixed		const &Fixed::max(const Fixed &foo, const Fixed &bar)
{
	return ((foo < bar) ? bar : foo );
}

Fixed		&Fixed::max(Fixed &foo, Fixed &bar)
{
	return ((foo < bar) ? bar : foo );
}

Fixed		const &Fixed::min(const Fixed &foo, const Fixed &bar)
{
	return ((foo < bar) ? foo : bar );
}

Fixed		&Fixed::min(Fixed &foo, Fixed &bar)
{
	return ((foo < bar) ? foo : bar );
}

// streaming operator <- overloading
std::ostream	&operator<<(std::ostream &out, const Fixed &data)
{
	out << data.toFloat();
	return (out);
}