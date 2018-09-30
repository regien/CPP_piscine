#include <iostream>
#include <list>
#include <iterator>

void	showlist(std::list <std::string> vaina)
{
	int		i = 0;
//	for (int i; i < vaina.size(); i++)
	for (std::list <std::string> :: iterator it = vaina.begin(); it != vaina.end(); ++it)
	{
		std::cout << "N_" << i << " = " << *it << std::endl;
		i++;
	}
}

int main(void)
{
	std::list	<std::string>	lista1;

	for(int i = 0; i < 10; ++i)
		lista1.push_back("This is a fucking string");

	showlist(lista1);
}
