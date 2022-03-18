#include "Contact.hpp"

std::string Contact::field_name[] = {
								"first_name" ,
								"last_name" ,
								"nickname",
								"phone_number" ,
								"secret"
							};

Contact::Contact()
{
	for(int i = 0; i < FIELD_SIZE; i++)
		field[i] = std::string();
}

Contact::~Contact()
{}

void	Contact::set_field(std::string info, int index)
{field[index] = info;}

std::string	Contact::get_field(int index)
{return field[index];}

std::string	Contact::get_name_field(int index)
{return field_name[index];}
