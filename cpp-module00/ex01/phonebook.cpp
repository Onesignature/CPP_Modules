#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	index = -1;
}

PhoneBook::~PhoneBook(){}

void	PhoneBook::add()
{
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	Number;
	std::string Secret;

	index++;
	if (index == 0)
		std::system("say -v Lekha To add a contact Follow the instructions provided on screen");
	std::cout << "First name ⬇" << std::endl;
	std::cin >> FirstName;
	std::cout << "Last name ⬇" << std::endl;
	std::cin >> LastName;
	std::cout << "Nickname ⬇" << std::endl;
	std::cin >> NickName;
	std::cout << "#Number ⬇" << std::endl;
	std::cin >> Number;
	std::cout << "Dark Secret ⬇" << std::endl;
	std::cin >> Secret;

	PhoneBook::MyContacts[index % 8].setFirstName(FirstName);
	PhoneBook::MyContacts[index % 8].setLastName(LastName);
	PhoneBook::MyContacts[index % 8].setNickName(NickName);
	PhoneBook::MyContacts[index % 8].setNumber(Number);
	PhoneBook::MyContacts[index % 8].setSecret(Secret);

	std::cout << "Contact added successfully" << std::endl;
	std::system("say -v Lekha Contact was added successfully");
}


void	PhoneBook::search()
{
	int index;

	if (this->index < 0)
	{
		std::cout << "📞 Phonebook Empty, Add some Contacts using ADD cmd" << std::endl;
		return ;
	}
	PhoneBook::printContacts();
	std::cout << "⬇ Enter the index of the contact to expand ⬇" << std::endl;
	std::cin >> index;
	if (index > 7 || index < 0 || index > this->index)
	{
		std::cout << "index is out of scope! Please try again" << std::endl;
		return ;
	}
	else
	{
		std::cout << "------------------------------" << std::endl;
		std::cout << std::left << std::setw(15) << "FirstName" << "|"
		<< std::left << std::setw(15) << PhoneBook::MyContacts[index].getFirstName() << std::endl;
		std::cout << std::left << std::setw(15) << "LastName" << "|"
		<< std::left << std::setw(15) << PhoneBook::MyContacts[index].getLastName() << std::endl;
		std::cout << std::left << std::setw(15) << "NickName" << "|"
		<< std::left << std::setw(15) << PhoneBook::MyContacts[index].getNickName() << std::endl;
		std::cout << std::left << std::setw(15) << "Number" << "|"
		<< std::left << std::setw(15) << PhoneBook::MyContacts[index].getNumber() << std::endl;
		std::cout << std::left << std::setw(15) << "DarkSecret" << "|"
		<< std::left << std::setw(15) << PhoneBook::MyContacts[index].getSecret() << std::endl;
		std::cout << "------------------------------" << std::endl;
	}
}

std::string truncate(std::string anyThing)
{
	std::string res;
	if (anyThing.size() <= 10)
		return anyThing;
	res = anyThing.substr(0, 10);
	res[9] = '.';
	return (res);
}

void PhoneBook::printContacts()
{
	std::cout << std::right << std::setw(10) << "Index" << "|"
			<< std::right << std::setw(10) << "Firstname" << "|"
			<< std::right << std::setw(10) << "Lastname" << "|"
			<< std::right << std::setw(10) << "Nickname"
			<< std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	for (int i = -1; i++ < index;)
	{
		if (i > 7)
			break ;
		std::cout << std::right << std::setw(10) << i << "|"
			<< std::right << std::setw(10) << truncate(PhoneBook::MyContacts[i].getFirstName()) << "|"
			<< std::right << std::setw(10) << truncate(PhoneBook::MyContacts[i].getLastName()) << "|"
			<< std::right << std::setw(10) << truncate(PhoneBook::MyContacts[i].getNickName())
			<< std::endl;
	}
}
