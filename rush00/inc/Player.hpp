#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "ft_retro.h"

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
};

#endif