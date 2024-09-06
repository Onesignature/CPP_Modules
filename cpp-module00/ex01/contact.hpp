#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number;
		std::string darksecret;

	public:
		Contact();
		~Contact();

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getNumber();
		std::string getSecret();

		void	setFirstName(std::string FirstName);
		void	setLastName(std::string LastName);
		void	setNickName(std::string NickName);
		void	setNumber(std::string Number);
		void	setSecret(std::string Secret);
};

#endif
