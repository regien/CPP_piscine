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
//		std::string			_Name; // not neccesary
		static int			_nb_players; // 1 for now
		int					_x_win;
		int					_y_win;
		//
		bool				_running;
		Player				*_playa;
		Enemy				*_enemy_ls[MAX_ENE];
		Bullet				*_bullet_ls[MAX_ENE];
		//					_Enemies[500] <- inheratance from Entity
		// maybe an entity manager

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
		void				run_game(); // run
		void				update();
		void				populate_enemies();
		Enemy				*create_enemy();
		//set tick
		//have_we_tick

		// Getters
		int					get_x_win() const;		
		int					get_y_win() const;
		bool				get_running() const;
		Bullet				*get_bullet_index(int i);
		Enemy				*get_enemy_index(int i);

		// Setters
		void				set_x_win(int x);
		void				set_y_win(int y);
		void				set_running(bool value);
		void				set_bullet_index(int i, Bullet *rhs);
		void				set_enemy_index(int i, Enemy *rhs);
};

// implementing a tick manager
// setTimestamp() -> check_TimeStamp();
#endif
