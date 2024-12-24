#include <iostream>
#include <string>
// int main()
// {
// 	std::cout << "LE NOM : ";
// 	std::string name;
// 	// std::cin >> name;
// 	std::getline(std::cin, name);
// 	std::cout << "Bonjour, " << name << " ! " << std::endl;
// 	return 0;
// }

// int main()
// {
// 	std::string greeting = "BUONGIORNO ";
// 	greeting += ", le monde !";
// 	std::cout << greeting << std::endl;
// 	return 0;
// }

// int main()
// {
// 	std:: string robio = "Robissa ";
// 	robio += "ZWINAAA !!!";
// 	std::cout << robio << std::endl;
// 	return 0;
// }

// int main()
// {
// 	std::cout << "ROBISSA ? ";
// 	std::string name;
// 	std::getline(std::cin, name);
// 	std::cout << "MAMA ISRAAAA !! " << name << "!" << std::endl;
// }

// int main()
// {
// 	std::cout << "i love robissa to the moon and never back" << std::endl;
// 	std::string str;
// 	std::cin >> str;
// }

// int main()
// {
// 	std::cout << "le nom : ";
// 	std::string str;
// 	std::getline(std::cin, str);
// 	std::cout << "Bonjour, " << str << " ! " << std::endl;
// }

// int main()
// {
// 	int nombre;
// 	std::cout << "Entrez le nombre : ";
// 	std::cin >> nombre;
// 	std::cin.ignore();//pour ignorer le \n restant apres entrer

// 	std::string line;
// 	std::cout << "entrez une phrase: ";
// 	// std::cin.ignore();//ignore le r de robio car il y a pas de entrer
// 	std::getline(std::cin, line);

// 	std::cout << "le nombre est : " << nombre << std::endl;
// 	std::cout << "la ligne  est : " << line << std::endl;
// }

// Pourquoi ignore() est nécessaire :
// Quand vous faites cin >> nombre, l'utilisateur tape généralement un nombre puis appuie sur ENTER
// cin >> nombre lit le nombre mais laisse le caractère '\n' (ENTER) dans le buffer
// Ensuite, quand getline() est appelé, il voit immédiatement ce '\n' et pense que c'est une ligne vide


// int main(int ac, char **av)
// {
// 	if (ac == 1)
// 	{
// 		std::cout << "*UNREADABLE" << std::endl;
// 		return (0);
// 	}
// 	for(int i = 1; i < ac; i++)
// 	{
// 		std::string str = av[i];
// 		for(size_t j = 0; j < str.length(); j++)
// 			std::cout << (char)std::toupper(str[j]);
// 	}
// 	std::cout << std::endl;
// 	return (0);
// }

#include "simple.class.hpp"
#include <iostream>

Simple::Simple(void)
{
	std::cout << "CONSTRUCTEUR CALLED" <<std::endl;
	this->robio = 42;//pointer qui pointe vers l instance courante
	std::cout << "this->robio: " << this->robio << std::endl;
	this->bar();//appeler une fonction directement a partir d un pointeur
	return ;
}

Simple::~Simple(void)
{
	std::cout << "DESTRUCTEUR CALLED" <<std::endl;
	return ;
}

void	Simple::bar(void)
{
	std::cout << "MEMBER FUNCTION BAR CALLED" << std::endl;
	return ;
}
//par defaut c++ passera toujours par defaul un parametre qui sera un pointeur vers l instance courante















// int main()
// {
// 	std::cout << "le nom: ";
// 	std::string str = getline(std::cin, str);
// 	std::cout << "Hola, " << str << " ! " << std::endl;
// }