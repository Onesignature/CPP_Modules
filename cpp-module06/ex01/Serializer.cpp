# include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "[SERIALIZER] constructor called." << std::endl;
	//This will never be called because class cannot be instanciated.
}

Serializer::Serializer(const Serializer &obj)
{
	*this = obj;
	//This will never be called because class cannot be instanciated.
}

Serializer &Serializer::operator=(const Serializer &obj)
{
	if (this != &obj)
	{}
	return (*this);
	//This will never be called because class cannot be instanciated.
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data *value = reinterpret_cast<Data*>(raw);
	return(value);
}
