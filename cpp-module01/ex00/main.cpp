#include "Zombie.hpp"

void welcome()
{
	std::cout << "⠀⠀⠀⠀⠀ ⢀⣠⡤⠖⠚⠛⠛⠓⠲⢦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
          << "⠀⠀⠀⠀⠀⠀⢀⣴⣾⣉⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⢦⡀⠀⠀⠀⠀⠀⠀\n"
          << "⠀⠀⠀⠀⠀⣴⠋⠀⠈⠀⠚⢫⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣹⣦⡀⠀⠀⠀⠀\n"
          << "⠀⠀⠀⢀⡾⠁⠀⠀⠀⠀⠀⠾⣏⣠⠀⠀⠀⠀⠀⠀⠀⠀⠘⠉⠈⢳⡀⠀⠀⠀\n"
          << "⢀⡴⠒⣾⠁⢠⠤⣀⠀⠀⠀⠀⠀⠛⠑⠀⠀⠀⠀⠀⠀⠀⣀⡠⡄⠀⣷⠒⠲⡄\n"
          << "⣞⠀⣄⣿⠀⠈⡇⠀⠉⠒⠤⣀⠀⠀⠀⡇⠀⠀⢀⡤⠒⠉⠁⢠⡇⠀⣿⠀⠀⢹\n"
          << "⠘⣆⠀⠹⡆⠀⢹⣄⠀⠀⢠⡿⠇⠢⢤⢧⠔⠊⢿⣇⠀⠀⢠⡞⠀⢠⡟⠀⣠⠏\n"
          << "⠀⠈⠓⠦⢽⣆⢄⡈⠛⠒⠉⠀⠀⢀⣼⣾⣆⠀⠀⠈⠓⠚⢉⡠⣠⣿⠤⠚⠁⠀\n"
          << "⠀⠀⠀⠀⠀⠈⠳⣽⣽⣐⢣⣴⣀⡬⣉⣄⣠⣄⣶⣔⣑⣮⣯⠾⠋⠀⠀⠀⠀⠀\n"
          << "⠀⠀⠀⠀⠀⠀⠀⠈⠙⣓⠶⢭⣭⣬⣋⣙⣮⣭⣭⢷⡿⣯⣉⣶⡄⠀⠀⠀⠀⠀\n"
          << "⠀⠀⠀⠀⠀⠀⠰⣽⣍⣽⡏⢲⡒⠃⠀⠀⠉⠊⢹⠉⡠⠞⠉⠉⠀⠀⠀⠀⠀⠀\n"
          << "⠀⠀⠀⠀⠀⠀⠀⠈⠉⠃⠑⠢⣣⠆⣵⠒⡌⠑⡾⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
		  << "⠀⠀⠀⠀⠀⠀⠀⠈⠉⠃⠑⠢⣣⠆⣵⠒⡌⠑⡾⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
}

int main()
{
	welcome();
	/*Stack Allocation of first Zombie, will destruct itself when program ends*/
	std::cout << "STACK ZOMBIE CREATION\n"
			<< "---------------------\n";
	Zombie stackZ;
	stackZ.announce();

	/*Now we will create a zombie on heap and destroy it manually*/
	std::cout << "HEAP ZOMBIE CREATION\n"
		<< "---------------------\n";
	Zombie *heapZ = NULL;
	heapZ = newZombie("Alhai");
	heapZ->announce();
	delete(heapZ);

	/*randomchump will be created on stack and will announce itself then die*/
	std::cout << "RANDOM STACK ZOMBIE CREATION\n"
		<< "--------------------------\n";
	randomChump("Alisher");
}
