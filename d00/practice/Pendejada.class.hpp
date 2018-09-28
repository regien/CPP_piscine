#ifndef PENDEJADA_CLASS_HPP
# define PENDEJADA_CLASS_HPP
# include <iostream>

class	Pendejada
{
	private:
		int		x;
		int		y;

	public:
		double	length;
		double	height;
		double	width;
		void	print_values(void);
		void	print_only_y(void);

	Pendejada(int, int);
	~Pendejada();
};

#endif
