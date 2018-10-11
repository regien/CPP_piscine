#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <time.h>

struct		Data {
	std::string		str1;
	std::string		str2;
	int				n;
};

Data		*deserialize(void *raw_data) {
	return	reinterpret_cast<Data*>(raw_data);
}

void		*serialize() {
	Data	*ptr = new Data();
	char	randomstuff[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	ptr->str1 = "";
	ptr->str2 = "";
	
	for (int i = 0; i < 8; ++i)
		ptr->str1 += randomstuff[rand() % 62];
	
	ptr->n = rand() % 10;
	
	for (int i = 0; i < 8; ++i)
		ptr->str2 += randomstuff[rand() % 62];


	return reinterpret_cast<void*>(ptr);	
}



int		main(void) {
	srand(time(NULL)); // randomdifier
	
	void	*v = serialize();
	Data	*d = deserialize(v);

	std::cout << "Serialized " << v << std::endl;
	std::cout << "Deserialzied: " << d->str1 << d->n << d->str2 << std::endl;
	delete d;
}