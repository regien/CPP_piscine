#ifndef ENTITY_HPP
# define ENTITY_HPP
# include "Game.hpp"

class Entity {
	protected:
		// direction  N S W E  | speed box per second
		int			_x_pos;
		int			_y_pos;
		Entity();
		
	public:
		Entity(int x, int y);
		Entity(const Entity &rhs); 
		~Entity();

		// operators
		Entity				&operator = (const Entity &rhs);

		// methods
		int			check_new_x_pos(int x);
		int			check_new_y_pos(int y);
		void		move(char direction, int speed);
		void		print_on_map(const char *str);

		// getters
		int			get_x_pos() const;
		int			get_y_pos() const;

		// setters
		void		set_x_pos(int x);
		void		set_y_pos(int y);
};


// when inheretance from main player void shoot();
// being_hit() also only in player
#endif