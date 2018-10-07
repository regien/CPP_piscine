#include "ft_retro.h"
#include "Game.hpp"

Game			g_game;

int main(int ac, char **av)
{
	Entity		player(g_game.get_x_win() / 2, g_game.get_y_win() / 2);
	int			pendejada = 0;
	int			input = 0;

	initscr();
	noecho();
	curs_set(FALSE);

	while(g_game.get_running()) {
		g_game.update_win_size();
		timeout(70);
		pendejada = getch();
		clear();
		player.do_move(pendejada);
		mvprintw(player.get_y_pos(), player.get_x_pos(), "^");
		refresh();
	}
	std::cout << "pendejada" << std::endl;
	return (0);
}
