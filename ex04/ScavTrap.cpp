#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, "Default", 20, 15, 3)
{
	std::cout << "------- ScavTrap Constructor Called -------" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)  : ClapTrap(100, 100, 50, 50, 1, _name, 20, 15, 3)
{
	std::cout << "------- ScavTrap Name Constructor Called -------" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_scavtrap) : ClapTrap(_scavtrap)
{
	std::cout << "------- ScavTrap Copy Constructor Called -------" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "------- ScavTrap Destructor Called -------" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &_scavtrap)
{
	std::cout << "------- ScavTrap = overloading Called -------" << std::endl;
	if (this == &_scavtrap)
		return (*this);
	ClapTrap::operator=(_scavtrap);
	return (*this);
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
	if (this->energy_points < 25)
		std::cout << "Not Enough Energy!!!" << std::endl;
	else
	{
		this->energy_points -= 25;
		std::string name_pool[8] = {
			"Kill Dragon",
			"Kill 100 Human",
			"Kill 100 Robot",
			"Kill 1000 Human",
			"Kill 1000 Robot", 
		};

		int num;
		srand((unsigned int)time(NULL));
		for (int i = 0; i < 5; i++)
		{
			num = rand() % 5;
			std::cout << "ScavTrap " << this->name << " challenge " 
				<< "for " << target	<< " " << name_pool[num] << std::endl;
		}
	}
}
