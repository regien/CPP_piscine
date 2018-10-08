#include "ft_retro.h"
#include "Bullet.hpp"
#include "Game.hpp"

Bullet::Bullet(): Entity() {}

Bullet::Bullet(int x, int y, int side): Entity(x, y), _side(side) {}

Bullet::Bullet(const Bullet &rhs) {
	*this = rhs;
}

Bullet::~Bullet() {}

// OPERATORS

Bullet			&Bullet::operator = (const Bullet &rhs) {
	_x_pos = rhs.get_x_pos();
	_y_pos = rhs.get_y_pos();
	_side = rhs.get_side();
	return (*this);
}

// METHODS

void			Bullet::update() {
	if (get_side() == 1) {
		move ('N', 1);
	} else {
		move ('S', 1);
	}
}

// GETTERS

int				Bullet::get_side() const {
	return (_side);
}