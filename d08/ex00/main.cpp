#include "easyfind.hpp"
#include <list>

int main(void)
{
	std::list<int>		list;

	list.push_front(1);
	list.push_front(7);
	list.push_front(8);
	list.push_front(45);
	list.push_front(5);
	list.push_front(0);
	list.push_front(76);
	list.push_front(78);
	list.push_front(9875);

	try {
		std::cout << easyfind(list, 5) << std::endl;
	} catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
}
