#ifndef ARRAY_TPP
# define ARRAY_TPP


#include <iostream>
#include <string>
#include <cstdlib>

template<typename T>
class Array {
	private:
		int	_len;
		T	*_arr;

	public:
		//CONSTRUCTORS
		Array<T>(): _arr(NULL), _len(0) {};
		Array<T>(int len):
			_len(len) {
			_arr = new T[len];
		}

		Array<T>(Array const &rhs) {
			*this = rhs;
		}
		~Array<T>() {};
		
		// OPERATORS
		Array	&operator = (Array const &rhs) {
			_len = rhs._len;
			_arr = new T[_len];
			for (int i = 0; i < _len; ++i)
				_arr[i] = rhs._arr[i];
		}

		T	&operator[](int i) {
			if (i >= _len)
				throw std::exception();
			return _arr[i];
		}

		// GETTERS
		int	get_len() const {
			return (_len);
		}
};

#endif
