#include "ft_retro.h"
#include "Player.hpp"

Player::Player(): Entity() {}

Player::Player(int x, int y) : Entity(x, y) {}

Player::Player(const Player &rhs) {
	*this = rhs;
}

Player::~Player() {}

// OPERATORS

Player			&Player::operator = (const Player &rhs) {
	_x_pos = rhs.get_x_pos();
	_y_pos = rhs.get_y_pos();
	return (*this);
}

// public Methods
void			Player::do_move(int value) {
	if (value == 'w' || value == 'W')
		move('N', 1);
	else if (value == 'a' || value == 'A')
		move('W', 1);
	else if (value == 's' || value == 'S')
		move('S', 1);
	else if (value == 'd' || value == 'D')
		move('E', 1);
}
