#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : amount(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::add_contact()
{
	amount %= MAX_CONTACTS;
	amount++;
	for (int i = 0; i < FIELD_SIZE; i++)
	{
		std::string input_info;
		std::cout << "input " << Contact::get_name_field(i) << ": ";
		std::getline(std::cin, input_info);
		if (input_info.empty())
		{
			std::cout << "uncorrect input\n";
			i--;
		}
		else
			contacts[amount - 1].set_field(input_info, i);
	}
}

void	PhoneBook::search_contact(void)
{
	if (!amount)
	{
		std::cout << "# Add a contact before searching !" << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int count_contact = 0; count_contact < MAX_CONTACTS
		&& contacts[count_contact].get_field(0) != ""; count_contact++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << count_contact + 1 << "|";
		for (int i = 0; i < 3; i++)
		{
			std::cout.width(10);
			if (contacts[count_contact].get_field(i).size() <= 10)
				std::cout << contacts[count_contact].get_field(i) << "|";
			else
				std::cout << contacts[count_contact].get_field(i).substr(0, 9) +  ".|";
		}
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;

	int index;

	std::cout << "# Enter Index to display Informations or 0 to Exit\n~";
	while (!(std::cin >> index) || (index < 0 || index > amount))
	{
		std::cin.clear();
		std::cin.ignore(INT32_MAX, '\n');
		std::cout << "# Invalid Index\n~";
	}
	std::cin.ignore(INT32_MAX, '\n');
	for (int i = 0; index > 0 && i < FIELD_SIZE; i++)
		std::cout << Contact::get_name_field(i) << ": " << contacts[index - 1].get_field(i) <<  std::endl;
}
 