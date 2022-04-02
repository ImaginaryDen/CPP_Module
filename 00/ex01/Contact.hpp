#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdint.h>


#define	FIELD_SIZE	5

class Contact
{
private:
	std::string	field[FIELD_SIZE];
	static std::string	field_name[FIELD_SIZE];

public:
	Contact();
	~Contact();

	void		set_field(std::string info, int index);
	std::string	get_field(int index);
	std::string	get_field(std::string name_field);
	static std::string	get_name_field(int index);
};

#endif