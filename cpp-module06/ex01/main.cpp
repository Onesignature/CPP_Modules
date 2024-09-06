#include "Serializer.hpp"

int main()
{
	Data bank;
	std::cout << "Enter a string to serialize: ";
	std::getline(std::cin, bank.s);
	std::cout << "Enter a number to serialize: ";
	std::cin >> bank.n;

	system("say Serializing the information.");
	uintptr_t serialvalue = Serializer::serialize(&bank);
	std::cout << "---------------------------------" << std::endl;
	std::cout << "--------Serialized info----------" << std::endl;
	std::cout << "serial: " << serialvalue << std::endl;
	system("say press Y to deserialise the information");
	char accept;
	std::cout << "Press y: ";
	std::cin >> accept;
	if (accept == 'y')
	{
		Data *unlocked = Serializer::deserialize(serialvalue);
		std::cout << "---------------------------------" << std::endl;
		std::cout << "-------Deserialized info---------" << std::endl;
		std::cout << "string: " << unlocked->s << std::endl;
		std::cout << "number: " << unlocked->n << std::endl;
	}
	// std::cout << &bank << " " << &bank.s << " " <<  &bank.n << std::endl;
	
}