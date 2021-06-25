#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, "Default", 60, 5, 0)
{
	std::cout << "------- NinjaTrap Constructor Called -------" << std::endl;
}

NinjaTrap::NinjaTrap(std::string _name)  : ClapTrap(60, 60, 120, 120, 1, _name, 60, 5, 0)
{
	std::cout << "------- NinjaTrap Name Constructor Called -------" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &_ninjatrap) : ClapTrap(_ninjatrap)
{
	std::cout << "------- NinjaTrap Copy Constructor Called -------" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "------- NinjaTrap Destructor Called -------" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &_ninjatrap)
{
	std::cout << "------- NinjaTrap = overloading Called -------" << std::endl;
	if (this == &_ninjatrap)
		return (*this);
	ClapTrap::operator=(_ninjatrap);
	return (*this);
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "Ninja " << this->name << " attacked " 
			  << target << " from behind , " << "causing " 
			  << this->melee_attack_damage << " points of damage!"
			  << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &_claptrap, std::string const &target)
{
	if (this->energy_points < 10)
		std::cout << "Not Enough Energy!!!" << std::endl;
	else
	{
		this->energy_points -= 10;
		std::cout << "------- ClapTrap is mine!!! -------" << std::endl;
		_claptrap.rangedAttack(target);
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &_fragtrap, std::string const &target)
{
	if (this->energy_points < 10)
		std::cout << "Not Enough Energy!!!" << std::endl;
	else
	{
		this->energy_points -= 10;
		std::cout << "------- FragTrap is mine!!! -------" << std::endl;
		_fragtrap.vaulthunter_dot_exe(target);
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &_scavtrap, std::string const &target)
{
	if (this->energy_points < 10)
		std::cout << "Not Enough Energy!!!" << std::endl;
	else
	{
		this->energy_points -= 10;
		std::cout << "------- ScavTrap is mine!!! -------" << std::endl;
		_scavtrap.challengeNewcomer(target);
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &_ninjatrap, std::string const &target)
{
	if (this->energy_points < 10)
		std::cout << "Not Enough Energy!!!" << std::endl;
	else
	{
		this->energy_points -= 10;
		std::cout << "------- NinjaTrap is mine!!! -------" << std::endl;
		_ninjatrap.meleeAttack(target);
	}
}
