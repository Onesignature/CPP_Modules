#include "identify.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void)
{
	std::srand(std::time(nullptr));
	int randomValue = (std::rand() % 3) + 1;

	if (randomValue == 1)
		return (new A);
	else if (randomValue == 2)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	//Dynamic casting, identify through a dynamic cast of a base pointer to see
	//if a conversion to the derived class is successful and then print the derived class.
	if (dynamic_cast<A*>(p))
		std::cout << "Derived base class is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Derived base class is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Derived base class is C." << std::endl;
}


void identify(Base &p) 
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The Class is A" << std::endl;
	}
	catch (std::bad_cast&) 
	{
		try 
		{
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "The Class is B" << std::endl;
        }
        catch (std::bad_cast&) 
		{
            try 
			{
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "The Class is C" << std::endl;
            }
            catch (std::bad_cast&) 
			{
                std::cout << "Not A, B, or C" << std::endl;
            }
        }
    }
}