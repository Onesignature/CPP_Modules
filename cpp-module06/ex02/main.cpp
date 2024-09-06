#include "identify.hpp"

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (EXIT_SUCCESS);
}