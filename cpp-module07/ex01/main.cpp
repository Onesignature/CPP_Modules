#include "iter.hpp"

int main()
{
	int a[] = {1, 5, 6, 2, 6};
	char s[] = {'A', 'P'};

	size_t len = sizeof(a) / sizeof(int);
    std::cout << "--------------------\n";
    std::cout << "|Printing int array |\n";
    std::cout << "--------------------\n";
	iter(a, len, plusfive<int>);
    std::cout << "\n";
    printer(a, 5);
    std::cout << "\n\n";
    std::cout << "---------------------\n";
    std::cout << "|Printing char array |\n";
    std::cout << "---------------------\n";
	iter(s, 2, plusfive<char>);
	printer(s, 2);
	return 0;
}
