#include "phonebook.hpp"

void welcome()
{
  std::cout << "   _" << std::endl;
  std::cout << "  | |" << std::endl;
  std::cout << "  |_|" << std::endl;
  std::cout << "  /_\\    \\ | /" << std::endl;
  std::cout << ".-\"\"\"------.----." << std::endl;
  std::cout << "|               |" << std::endl;
  std::cout << "| ====o======== |" << std::endl;
  std::cout << "|_______________|" << std::endl;
  std::cout << "| ____________  |" << std::endl;
  std::cout << "||   Welcome   ||" << std::endl;
  std::cout << "||             ||" << std::endl;
  std::cout << "||_____________||" << std::endl;
  std::cout << "|__.---\"\"\"---.__|" << std::endl;
  std::cout << "|---------------|" << std::endl;
  std::cout << "|[Yes][(|)][ No]|" << std::endl;
  std::cout << "| ___  ___  ___ |" << std::endl;
  std::cout << "|[<-'][CLR][.->]|" << std::endl;
  std::cout << "| ___  ___  ___ |" << std::endl;
  std::cout << "|[1__][2__][3__]|" << std::endl;
  std::cout << "| ___  ___  ___ |" << std::endl;
  std::cout << "|[4__][5__][6__]|" << std::endl;
  std::cout << "| ___  ___  ___ |" << std::endl;
  std::cout << "|[7__][8__][9__]|" << std::endl;
  std::cout << "| ___  ___  ___ |" << std::endl;
  std::cout << "|[*__][0__][#__]|" << std::endl;
  std::cout << "`--------------'" << std::endl;
  std::cout << "`---------------'" << std::endl;
  std::cout << "Allowed Commands" << std::endl;
  std::cout << "      ADD      " << std::endl;
  std::cout << "      EXIT     " << std::endl;
  std::cout << "      SEARCH   " << std::endl;
  std::cout << "        ↓      " << std::endl;
}

int main()
{
	PhoneBook phoneBook;

  std::string input;
  system("Color 16");
  welcome();
  while (1)
  {
    if (input == "EXIT" || std::cin.eof())
      break ;
    std::cout << "Enter input -⮀ ";
    std::cin >> input;

    if (input == "ADD")
      phoneBook.add();
    else if (input == "SEARCH")
      phoneBook.search();
  }
  std::cout << "📟 Thanks for using the crappy PhoneBook 📟" << std::endl;
  std::system("say -v Lekha Thanks for using the crappy PhoneBook");
}
