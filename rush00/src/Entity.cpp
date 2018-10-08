#include "ft_retro.h"
#include "Entity.hpp"

// CONSTRUCTORS

Entity::Entity():
_x_pos(0), _y_pos(0) {}

Entity::Entity(int x, int y):
_x_pos(x), _y_pos(y) {}

Entity::Entity(const Entity &rhs) {
	*this = rhs;
}

Entity::~Entity() {}

// OPERATORS

Entity			&Entity::operator = (const Entity &rhs)
{
	_x_pos = rhs.get_x_pos();
	_y_pos = rhs.get_y_pos();
	return (*this);
}

// METHODS

int				Entity::check_new_x_pos(int x) {
	int			holder = 0;

	if (x > g_game.get_x_win())
		holder = g_game.get_x_win();
	else if (x < 0)
		holder = 0;
	else
		holder = x;
	return (holder);
}

int				Entity::check_new_y_pos(int y) {
	int			holder = 0;

	if (y > g_game.get_y_win())
		holder = g_game.get_y_win();
	else if (y < 0)
		holder = 0;
	else
		holder = y;
	return (holder);
}

void			Entity::move(char direction, int speed) {
	switch(direction) {
		case 'N' :
			set_y_pos(check_new_y_pos(_y_pos - speed));
			break;
		case 'S' :
			set_y_pos(check_new_y_pos(_y_pos + speed));
			break;
		case 'E' :
			set_x_pos(check_new_x_pos(_x_pos + speed));
			break;
		case 'W' :
			set_x_pos(check_new_x_pos(_x_pos - speed));
			break;
	}
}

void			Entity::print_on_map(const char *str) {
	mvprintw(get_y_pos(), get_x_pos(), str);
}

// GETTERS

int				Entity::get_x_pos() const {
	return (_x_pos);
}

int				Entity::get_y_pos() const {
	return (_y_pos);
}

// SETTERS

void			Entity::set_x_pos(int x) {
	_x_pos = x;
}

void			Entity::set_y_pos(int y) {
	_y_pos = y;
}