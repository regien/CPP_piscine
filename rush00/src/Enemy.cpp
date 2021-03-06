#include "ft_retro.h"
#include "Enemy.hpp"
# include <time.h>
# include <cstdlib>

Enemy::Enemy(): Entity() {}

Enemy::Enemy(int x, int y) : Entity(x, y) {}

Enemy::Enemy(const Enemy &rhs) {
	*this = rhs;
}

Enemy::~Enemy() {}

// OPERATORS

Enemy			&Enemy::operator = (const Enemy &rhs) {
	_x_pos = rhs.get_x_pos();
	_y_pos = rhs.get_y_pos();
	return (*this);
}

// public Methods
void			Enemy::update() {
	if ((rand() % 150) == 5)
		move('E', 1);
	else if ((rand() % 150) == 1)
		move('W', 1);
	else
		move('S', 1);
	// check colition here
}