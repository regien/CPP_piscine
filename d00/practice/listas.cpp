#include <iostream>
#include <list>
#include <iterator>

void	showlist(std::list <int> g)
{
	std::list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it)
		std::cout << "\t " << *it;
	std::cout << "\n";
}

int main(void)
{
	std::list	<int> lista1;
	std::list	<int> lista2;

	for (int i = 0; i < 10; ++i)
	{
		lista1.push_back(i * 2);
		lista2.push_front(i * 3);
	}

	std::cout << "\nLista 1 is : ";
	showlist(lista1);

}

