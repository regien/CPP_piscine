#include "ft_retro.h"
#include "Game.hpp"
#include "Player.hpp"

Game			g_game;

int main(void)
{
//	int			input = 0;

//	Player		player(g_game.get_x_win() / 2, (g_game.get_y_win() / 6) * 5);
/*
	while(g_game.get_running()) {
		g_game.update_win_size();
//		timeout(70);
//		pendejada = getch();
		clear();
		if ((input = getch()) != ERR)
			player.do_move(input);
		mvprintw(player.get_y_pos(), player.get_x_pos(), "^");
		refresh();
		usleep((float(float(1) / 30)) * float(1000000));
//		usleep((float(1) / 30) * 10000);
	}*/
	g_game.run_game();
	std::cout << "pendejada" << std::endl;
	endwin();
	return (0);
}
