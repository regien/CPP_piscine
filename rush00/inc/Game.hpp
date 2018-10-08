#ifndef GAME_HPP
# define GAME_HPP
# include "ft_retro.h"
# include <ncurses.h>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <string>
# include "Entity.hpp"
# include "Player.hpp"
# include "Enemy.hpp"
# include "Bullet.hpp"
# define MAX_ENE 500

class Game {
	private:
		static int			_nb_players;
		int					_x_win;
		int					_y_win;
		bool				_running;
		int					_lives_remaining;
		Player				*_playa;
		Enemy				*_enemy_ls[MAX_ENE];
		Bullet				*_bullet_ls[MAX_ENE];

	public:
		Game();
		Game(int x, int y);
		Game(const Game &rhs);
		~Game();

		// Operator
		Game				&operator = (const Game &rhs);

		// Methods
		void				update_win_size();
		void				update_win_size(int y, int x);
		void				init_scr_game();
		void				run_game();
		void				update();
		void				populate_enemies();
		Enemy				*create_enemy();
		void				check_colition_friends();

		// Getters
		int					get_x_win() const;		
		int					get_y_win() const;
		bool				get_running() const;
		Bullet				*get_bullet_index(int i);
		Enemy				*get_enemy_index(int i);
		int					get_lives_remaining() const;

		// Setters
		void				set_x_win(int x);
		void				set_y_win(int y);
		void				set_running(bool value);
		void				set_bullet_index(int i, Bullet *rhs);
		void				set_enemy_index(int i, Enemy *rhs);
		void				set_lives_remaining(int i);
};

#endif
