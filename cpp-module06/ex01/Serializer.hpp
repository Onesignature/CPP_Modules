#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>
# include <string>

struct Data
{
	std::string s;
	int			n;
};

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &obj);
		Serializer &operator=(const Serializer &obj);

	public:
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

# endif