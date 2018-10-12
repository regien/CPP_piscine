#include <iostream>

template<typename T>
void	iter(T *array, int len, void (*f)(T const &)) {
	for (int i = 0; i < len ; ++i) {
		f(array[i]);
	}
}

template<typename T>
void	Print(T ref) {
	std::cout << ref << std::endl;
}

int	main() {
	int	example[] = {36, 43, 15, 24, 45, 69, 100};
	std::string	vaina[] = {
	"Lora",
	"Lara",
	"Lalo",
	"Lulu"
	};

	
	::iter(example, 7, ::Print);
	::iter(vaina, 4, ::Print);
}
