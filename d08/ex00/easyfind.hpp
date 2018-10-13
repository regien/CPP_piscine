#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>
// anytype of cast - c++ shit
template<typename T>
int	easyfind(T & iter, int n) {
	typename	T::iterator	it;

	try {
		it = std::find(iter.begin(), iter.end(), n);
	} catch(std::exception &error) {
		std::cerr << error.what() << std::endl;
	}

	if (it == iter.end())
		throw std::logic_error("Item not found in list");
	return (*it);
}

// gonna use list to iterate throught it and look for n basically

#endif
