#ifndef PHONEBOOK
#define PHONEBOOK

# include <iostream>
# include "contact.hpp"
# include <string>
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
	private:
		Contact	MyContacts[8];
		int		index;

	public:
		PhoneBook();
		~PhoneBook();

		void add();
		void search();

		void printContacts();
};


#endif
