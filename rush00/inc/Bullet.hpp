#ifndef BULLET_HPP
# define BULLET_HPP
# include "ft_retro.h"
# include "Game.hpp"

/*
** side = 0 | ENEMY
** side = 1 | ALLY
*/

class Bullet : public Entity {
	private:
		int					_side;
		Bullet();

	public:
		Bullet(int x, int y, int side);
		Bullet(const Bullet &rhs);
		~Bullet();

		// operators
		Bullet				&operator = (const Bullet &rhs);

		// methods
		void				update();

		//getters
		int					get_side() const;
};

#endif