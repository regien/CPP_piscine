#ifndef FT_RETRO_H
# define FT_RETRO_H
# include <ncurses.h>
# include <time.h>
# include <cstdlib>
# include <iostream>
# include <fstream>
# include <cstdlib>
# include <string>
# include <unistd.h>
# include "Game.hpp"
# include "Entity.hpp"
# include "Player.hpp"
# include "Enemy.hpp"
# include "Bullet.hpp"
# define MAX_ENE 500
# define MAX_ARR 500

class				Game;
class				Entity;
class				Player;
class				Enemy;
class				Bullet;

extern Game			g_game;


#endif
