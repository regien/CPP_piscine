#include "ft_retro.h"
#include "Game.hpp"
# include <time.h>
# include <cstdlib>

int		Game::_nb_players = 1;

// CONSTRUCTORS

Game::Game():
_x_win(0), _y_win(0), _running(true) {
	init_scr_game();
	update_win_size();
	for (int i = 0; i < MAX_ENE; ++i)
		_enemy_ls[i] = NULL;
	for (int i = 0; i < MAX_ENE; ++i)
		_bullet_ls[i] = NULL;
	_playa = new Player(g_game.get_x_win() / 2, (g_game.get_y_win() / 6) * 5);
}

Game::Game(int x, int y):
_x_win(x), _y_win(y), _running(true) {
	_playa = new Player(x / 2, (y / 6) * 5);
}

Game::Game(const Game &rhs) {
	_playa = new Player(0, 0);
	*this = rhs;
}

Game::~Game() {
	delete (_playa);
}

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

void			Game::init_scr_game() {
	initscr();
	noecho();
	nodelay(stdscr, true);
	curs_set(0);
	update_win_size();
}

void			Game::run_game() {
	int			input = 0;
//	Player		player(g_game.get_x_win() / 2, (g_game.get_y_win() / 6) * 5);
	// init_players and entities or some shit like that
	while(get_running()) {
		update_win_size();
		clear();
		if ((input = getch()) != ERR) {
//			std::cout << "vaina" << input << std::endl;
			_playa->do_move(input);
		}
//		mvprintw(_playa->get_y_pos(), _playa->get_x_pos(), "^");
		// render whole screen
		update();
		refresh();
		usleep((float(float(1) / 30)) * float(1000000)); // can be modular
	}
	std::cout << "pendejada" << std::endl;
	endwin();
}

void			Game::update() {
	_playa->print_on_map(std::string("^").c_str());
	for (int i = 0; i < MAX_ENE; ++i) {
		if (_bullet_ls[i] != NULL) {
			_bullet_ls[i]->update();
			_bullet_ls[i]->print_on_map(std::string("!").c_str());
			//if check hit here
			// else if down here
			if (_bullet_ls[i]->get_y_pos() == 0) {
				delete (_bullet_ls[i]);
				_bullet_ls[i] = NULL;
			}
		}
	}
	populate_enemies();
	for (int i = 0; i < MAX_ENE; ++i) {
		if (_enemy_ls[i] != NULL) {
			_enemy_ls[i]->update();
			_enemy_ls[i]->print_on_map(std::string("$").c_str());
			//check colition here
			//else if here
			if (_enemy_ls[i]->get_y_pos() >= get_y_win()) {
				delete (_enemy_ls[i]);
				_enemy_ls[i] = NULL;
			}
		}
	}
}

void			Game::populate_enemies() {
	// success
	if ((rand() % 10) < 3)  {
		for (int i = 0; i < MAX_ENE; ++i) {
			if (get_enemy_index(i) == NULL) {
				set_enemy_index(i, create_enemy());
			}
		}
	}
}

Enemy			*Game::create_enemy() {
	return (new Enemy(rand() % get_x_win(), 0));
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

Bullet			*Game::get_bullet_index(int i) {
	return (_bullet_ls[i]);
}

Enemy			*Game::get_enemy_index(int i) {
	return (_enemy_ls[i]);
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

void			Game::set_bullet_index(int i, Bullet *rhs) {
	_bullet_ls[i] = rhs;
}

void			Game::set_enemy_index(int i, Enemy *rhs) {
	_enemy_ls[i] = rhs;
}