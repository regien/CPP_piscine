#ifndef GAME_HPP
# define GAME_HPP
# include <ncurses.h>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <string>
# include "Entity.hpp"

class Game {
	private:
//		std::string			_Name; // not neccesary
		static int			_nb_players; // 1 for now
		int					_x_win;
		int					_y_win;
		//
		bool				_running;
		//					_Enemies[500] <- inheratance from Entity

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
		void				init_scr();
		void				run_game(); // run
		//set tick
		//have_we_tick

		// Getters
		int					get_x_win() const;		
		int					get_y_win() const;
		bool				get_running() const;	

		// Setters
		void				set_x_win(int x);
		void				set_y_win(int y);
		void				set_running(bool value);
};

// implementing a tick manager
// setTimestamp() -> check_TimeStamp();
#endif
