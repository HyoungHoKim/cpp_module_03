#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "Default", 30, 20, 5)
{
	std::cout << "------- FragTrap Constructor Called -------" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap (100, 100, 100, 100, 1, _name, 30, 20, 5)
{
	std::cout << "------- FragTrap Name Constructor Called -------" << std::endl;
}

FragTrap::FragTrap(const FragTrap &_flagtrap) : ClapTrap(_flagtrap)
{
	std::cout << "------- FragTrap Copy Constructor Called -------" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "------- FragTrap Destructor Called -------" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &_flagtrap)
{
	std::cout << "------- FragTrap = overloading Called -------" << std::endl;
	if (this == &_flagtrap)
		return (*this);
	ClapTrap::operator=(_flagtrap);
	return (*this);
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FragTrap " << this->name << " attacks " 
			  << target << " at range, " << "causing " 
			  << this->ranged_attack_damage << " points of damage!"
			  << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energy_points < 25)
		std::cout << "Not Enough Energy!!!" << std::endl;
	else
	{
		this->energy_points -= 25;
		std::string name_pool[8] = {
			"Drop the Hammer",
			"Killbot",
			"Hyperion Punch",
			"One Last Thing",
			"Repulsive", 
		};

		int num;
		srand((unsigned int)time(NULL));
		for (int i = 0; i < 5; i++)
		{
			num = rand() % 5;
			std::cout << "FR4G-TP " << this->name << " attacks " 
				<< target << " " << name_pool[num] << std::endl;
		}
	}
}
