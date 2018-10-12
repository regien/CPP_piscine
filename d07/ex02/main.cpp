#include "Array.tpp"

int main() {
	// INT example
	Array<int>	arr_int(5);

	std::cout << "Total_size of array: " << arr_int.get_len() << std::endl;

	for (int i = 0; i < arr_int.get_len(); i++) {
		arr_int[i] = i + 1;
		std::cout << arr_int[i] << std::endl;
	}

	// STD::STRING example
	Array<std::string>	arr_strings(5);
	std::string words[] = {
	"Lara",
	"Lora",
	"Lura",
	"Lera",
	"Lira",
	"Lila"
	};
	
	try {
		for (int i = 0; i < 6; i++) {
			arr_strings[i] = words[i];
			std::cout << arr_strings[i] << std::endl;
		}
	} catch (std::exception& error) {
		std::cerr << error.what() << std::endl;
	}
}
