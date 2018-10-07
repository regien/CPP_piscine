#include <termios.h>
#include <curses.h>
#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

//omg this is termcap as a high level

int main(int ac, char **av)
{
	int			x = 0;
	int			y = 0;
	int			max_x = 0;
	int			max_y = 0;
	int			next_x = 0;
	int			direction = 1;

	initscr();
	noecho();
	curs_set(FALSE);


	while(1)
	{
		getmaxyx(stdscr, max_y, max_x);
		clear();
		mvprintw(y, x, "o");
		refresh();

		usleep(DELAY);
		next_x = x + direction;

		if (next_x >= max_x || next_x < 0)
			direction *= -1;
		else
			x += direction;
	}
	endwin();
}
