#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <typeinfo>

class	Base {
	public:
		virtual	~Base() {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};



Base	*initializer() {
	int		random_n = rand() % 3;
	Base	*ptr;

	if (random_n == 0)
		ptr = new A();
	else if (random_n == 1)
		ptr = new B();
	else
		ptr = new C();

	return (ptr);
}

void	id_from_ptr(Base *ptr) {
	if (dynamic_cast<A*>(ptr))
		std::cout << "Id from pointer: A" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "Id from pointer: B" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "Id from pointer: C" << std::endl;
		
}

void	id_from_reference(Base &ref) {
	try {
		A		&vaina = dynamic_cast<A&>(ref);
		std::cout << "Id from reference: A" << std::endl;
		static_cast<void>(vaina);
	} catch(std::bad_cast &error) {
		std::cerr << "Casting A class by reference have failed" << std::endl;
	}

	try {
		B		&second = dynamic_cast<B&>(ref);
		std::cout << "Id from reference: B" << std::endl;
		static_cast<void>(second);
	} catch(std::bad_cast &error) {
		std::cerr << "Casting B class by reference have failed" << std::endl;
	}

	try {
		C		&third = dynamic_cast<C&>(ref);
		std::cout << "Id from reference: B" << std::endl;
		static_cast<void>(third);
	} catch(std::bad_cast &error) {
		std::cerr << "Casting B class by reference have failed" << std::endl;
	}
}

int		main(void) {
	srand(time(NULL));

	Base	*b = initializer();
	id_from_ptr(b);
	id_from_reference(*b);

	delete b;
}