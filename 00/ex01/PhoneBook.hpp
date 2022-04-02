#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact	contacts[MAX_CONTACTS];
	int		amount;
public:
	PhoneBook();
	~PhoneBook();

	void	add_contact(void);
	void	search_contact(void);
};

#endif