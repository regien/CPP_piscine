#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "ft_retro.h"
# include "Entity.hpp"
# include "Bullet.hpp"

/*
** side = 0 | ENEMY
** side = 1 | ALLY
*/

class Player: public Entity {
	private:
		Player();

	public:
		Player(int x, int y);
		Player(const Player &rhs);
		~Player();

		// operators
		Player				&operator = (const Player &rhs);

		// methods
		void				do_move(int	value);
		void				shoot();
		Bullet				*creating_bullet(); // maybe its apointer
		// or a gigantic of MAX_BULLETS opposing directions
};

#endif