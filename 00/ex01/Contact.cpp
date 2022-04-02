#include "Contact.hpp"

std::string Contact::field_name[] = {
								"first_name" ,
								"last_name" ,
								"nickname",
								"phone_number" ,
								"secret"
							};

Contact::Contact()
{}

Contact::~Contact()
{}

void	Contact::set_field(std::string info, int index)
{
	if(index >= 0 && index < FIELD_SIZE)
		field[index] = info;
}

std::string	Contact::get_field(int index)
{
	if(index >= 0 && index < FIELD_SIZE)
		return field[index];
	return "NULL";
}

std::string	Contact::get_field(std::string name_field)
{
	for(int i = 0; i < FIELD_SIZE; i++)
		if(!get_name_field(i).compare(name_field))
			return(get_field(i));
	return "NULL";
}

std::string	Contact::get_name_field(int index)
{
	if(index >= 0 && index < FIELD_SIZE)
		return field_name[index];
	return "NULL";
}
