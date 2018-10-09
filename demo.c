#include <termios.h>
#include <curses.h>
#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000
/*
** Simple code to initialize a simple ncurses
** envio
*/





int main(int ac, char **av)
{
	int			x = 0;
	int			y = 0;
	int			max_x = 0;
	int			max_y = 0;
	int			next_x = 0;
	int			direction = 1;
	int			pendejada = 0;

	initscr();
	noecho();
	curs_set(FALSE);


/*	mvprintw(0, 0, "Hello, world!");
	mvprintw(30, 30, "XOPA");
	refresh();

	int pendejada = wgetch(inputwin);

	if (pendejada == 'J')
	{
		mvprintw(inputwin, )
	}
*/

	while(1)
	{
		getmaxyx(stdscr, max_y, max_x);
		timeout(70);
		pendejada = getch();
//		pendejada = wgetch(stdscr);
		clear();

//		pendejada = wgetch(stdscr);
		if (pendejada == 'j')
			mvprintw(10, 4, "You pressed J");
		
		mvprintw(y, x, "o");
		refresh();

//		usleep(DELAY);
		next_x = x + direction;

		if (next_x >= max_x || next_x < 0)
			direction *= -1;
		else
			x += direction;
	}
	endwin();
}
