#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			book.add_contact();
		else if (command == "SEARCH")
			book.search_contact();
		else if (command == "EXIT" || std::cin.eof())
		{
			std::cout << "# Bye." << std::endl;
			break;
		}
	}
}