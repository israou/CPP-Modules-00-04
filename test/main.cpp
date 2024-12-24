#include <iostream>

// int main(int ac, char **av)
// {
// 	for(int i = 0; i < ac; i++)
// 	{
// 		std::string str = av[i];
// 		std::cout << "l argument : " << str << " sa longueur est = " << str.length() << std::endl;
// 		return (0);
// 	}
// }

// int main()
// {
// 	std::cout << "holaaa ";
// 	std::string str;
// 	std::getline(std::cin, str);
// 	std::cout << "holaaaa " << str << std::endl;
// }

#include "simple.class.hpp"


int main()
{
	Simple instance;
	instance.robio = 42; //attribut foo de la variable instance
	std::cout << "instance.robio " << instance.robio << std::endl;
	instance.bar();
	return 0;
}

// 1. Le programme commence
// 2. On arrive à 'Simple instance;'
// 3. Le constructeur est appelé -> affiche "CONSTRUCTEUR CALLED"
// 4. Le programme continue
// 5. On arrive à la fin du main()
// 6. Le destructeur est appelé -> affiche "DESTRUCTEUR CALLED"
// 7. Le programme se termine