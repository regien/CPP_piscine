/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 01:57:59 by gmalpart          #+#    #+#             */
/*   Updated: 2018/09/27 01:58:24 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int		i;
	int		e;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (argv[++i])
	{
		e = -1;
		while (argv[i][++e])
			if (argv[i][e] >= 'a' && argv[i][e] <= 'z')
				argv[i][e] = argv[i][e] - 32;
		std::cout << argv[i];
	}
	std::cout << std::endl;
}
