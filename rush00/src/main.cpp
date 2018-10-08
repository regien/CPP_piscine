#include "ft_retro.h"
#include "Game.hpp"
#include "Player.hpp"

Game			g_game;

int main(void)
{
	g_game.run_game();
	endwin();
	return (0);
}
