#include <iostream>

class Character
{
	public :
		virtual void sayHello(std::string const & target);
};

class Warrior : public Character
{
	public :
		virtual void	sayHello(std::string const & target);
};

void	Character::sayHello(std::string const & target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const & target)
{
	std::cout << "FUCK OFF " << target << ", I dont like you !" << std::endl;
}

int main()
{
	Warrior*	a = new Warrior(); //ok, warrior is a warrior
	Character*	b = new Warrior(); //ok, warrior is a character

	// Warrior*	c = new Character(); cannot initiaize child par parent, character is not warrior

	a->sayHello("STUDENTS"); //cette ligne est resolu pendant l execution
	b->sayHello("STUDENTS");
}

//avec virtuel Le compilateur cherche la bonne version à l'exécution