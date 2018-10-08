#include "Game.hpp"

int		Game::_nb_players = 1;

// CONSTRUCTORS

Game::Game():
_x_win(0), _y_win(0), _running(true) {
	update_win_size();
}

Game::Game(int x, int y):
_x_win(x), _y_win(y), _running(true) {

}

Game::Game(const Game &rhs) {
	*this = rhs;
}

Game::~Game() {}

// OPERATORS

Game			&Game::operator = (const Game &rhs)
{
	_x_win = rhs.get_x_win();
	_y_win = rhs.get_y_win();
	_running = rhs.get_running();
	return (*this);
}

// METHODS

void			Game::update_win_size() {
	int			new_x = 0;
	int			new_y = 0;

	getmaxyx(stdscr, new_y, new_x);
	set_x_win(new_x - 1);
	set_y_win(new_y - 1);
}

void			Game::update_win_size(int y, int x) {
	set_x_win(x);
	set_y_win(y);
}

void			Game::init_src() {
	initscr();
	noecho();
	nodelay(stdscr, true);
	curs_set(0);
	update_win_size();
}

// GETTERS

int				Game::get_x_win() const {
	return (_x_win);
}

int				Game::get_y_win() const {
	return (_y_win);
}

bool			Game::get_running() const {
	return (_running);
}

// SETTERS

void			Game::set_x_win(int x) {
	_x_win = x;
}

void			Game::set_y_win(int y) {
	_y_win = y;
}

void			Game::set_running(bool value) {
	_running = value;
}