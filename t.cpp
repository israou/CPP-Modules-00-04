
#include <iostream>

// int main()
// {
// 	int numberofballs = 42;
// 	int* ballsPtr = &numberofballs;
// 	int& ballsRef = numberofballs;//je ne peux pas changer sur quoi ma reference pointe
// 	// int& ballsRef2;//faux c est une reference qui ne pointe sur rien

// 	std::cout << numberofballs << " " << *ballsPtr << " " << ballsRef << " "
// 		<< &numberofballs << " " << ballsPtr << std::endl;

// 	*ballsPtr = 21;
// 	std::cout << numberofballs << std::endl;
// 	ballsRef = 84;
// 	std::cout << numberofballs << std::endl;
// 	return 0;
// }

//--------==============------------------


// void	byPtr(std::string* str)
// {
// 	*str += " and ho";
// }

// void	byConstPtr(std::string const * str)
// {
// 	std::cout << *str << std::endl;
// }

// void	byRef(std::string& str)
// {
// 	str += " and ouis";
// }

// void	byConstRef(std::string const & str)
// {
// 	std::cout << str << std::endl;
// }

// int main()
// {
// 	std::string str = " i love robio";

// 	std::cout << str << std::endl;
// 	byPtr(&str);
// 	byConstPtr(&str);

// 	str = "i love me";
// }

//==========-----------==================


// int main()
// {
// 	int nbr = 42;
// 	int* ptr = &nbr;
// 	int& ref = nbr;

// 	std::cout << "ptr: " << ptr << std::endl;
// 	std::cout << "*ptr: " << *ptr << std::endl;
// 	std::cout << "ref: " << ref << std::endl;
// 	std::cout << "&ref: " << &ref << std::endl;




	// nbr *ptr ref nefs la valeur
	// &nbr ptr &ref nefs l addresse
	// les références doivent être initialisées à leur déclaration
	// une référence ne peut pas changer pour référencer une autre variable
	// pas besoin de symbole spécial pour accéder à la valeur
// }

using namespace std;

void	modifierValeur(int* pointeur)
{
	std::cout << "Avant modification (pointeur): " << *pointeur << std::endl;
	*pointeur = 100;
	std::cout << "Après modification (pointeur): " << *pointeur << std::endl;
}

void modifierValeurRef(int& reference)
{
	std::cout << "Avant modification (reference): " << reference << std::endl;
	reference = 10;
	std::cout << "Après modification (reference): " << reference << std::endl;
}

int main()
{
	int x = 42;
	std::cout << "Valeur initiale de x: " << x << std::endl;

	modifierValeur(&x);
	std::cout << "x après modification par pointeur: " << x << std::endl;

	modifierValeurRef(x);
	std::cout << "x après modification par référence: " << x << std::endl;

	return 0;
}
// modifierValeur utilise un pointeur : on passe l'adresse de x avec &x
// modifierValeurRef utilise une référence : on passe directement x

// Les deux approches permettent de modifier la variable originale, mais la syntaxe avec référence est plus simple à lire et à comprendre.