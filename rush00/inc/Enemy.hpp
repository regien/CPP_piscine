#ifndef ENEMY_CPP
# define ENEMY_CPP
# include "ft_retro.h"

class Enemy : public Entity {
	private:
		Enemy();
	
	public:
		Enemy(int x, int y);
		Enemy(const Enemy &rhs);
		~Enemy();

		// operators
		Enemy				&operator = (const Enemy &rhs);

		// methods
		void				update();
		//void				do_move(int	value); behavior? shoot?
		// going down function should show every two second
		//or shit like that
};

#endif