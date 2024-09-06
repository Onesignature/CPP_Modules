#include "phonebook.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string Contact::getFirstName()
{
	return first_name;
}

std::string Contact::getLastName()
{
	return last_name;
}

std::string Contact::getNickName()
{
	return nickname;
}

std::string Contact::getNumber()
{
	return number;
}

std::string Contact::getSecret()
{
	return darksecret;
}

void	Contact::setFirstName(std::string FirstName)
{
	first_name = FirstName;
}

void	Contact::setLastName(std::string LastName)
{
	last_name = LastName;
}

void Contact::setNickName(std::string NickName)
{
	nickname = NickName;
}

void Contact::setNumber(std::string Number)
{
	number = Number;
}

void Contact::setSecret(std::string Secret)
{
	darksecret = Secret;
}
