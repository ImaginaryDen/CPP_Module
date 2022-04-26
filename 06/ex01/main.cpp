#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}


int	main() {

	Data	data;

	data._name = "Jan";

	std::cout << "before serializaation:	" << &data << std::endl;

	uintptr_t	ser = serialize(&data);
	std::cout << "serializaation:	" << (void *)(ser) << std::endl;
	Data*		des = deserialize(ser);

	std::cout << "after serializaation:	" << des << std::endl;

}