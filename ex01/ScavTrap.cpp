#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "------- Default Constructor Called -------" << std::endl;
	std::cout << "Let's get this party started!" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = "Default";
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "------- Name Constructor Called -------" << std::endl;
	std::cout << _name << "'s get this party started!" << std::endl; 
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = _name;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const ScavTrap &_scavtrap)
{
	std::cout << "------- Copy Constructor Called -------" << std::endl;
	std::cout << _scavtrap.get_name() << "'s get this party started!" << std::endl; 
	this->hit_points = _scavtrap.get_hit_points();
	this->max_hit_points = _scavtrap.get_max_hit_points();
	this->energy_points = _scavtrap.get_energy_points();
	this->max_energy_points = _scavtrap.get_max_energy_points();
	this->level = _scavtrap.get_level();
	this->name = _scavtrap.get_name();
	this->melee_attack_damage = _scavtrap.get_melee_attack_damage();
	this->ranged_attack_damage = _scavtrap.get_ranged_attack_damage();
	this->armor_damage_reduction = _scavtrap.get_armor_damage_reduction();
}

ScavTrap::~ScavTrap()
{
	std::cout << "------- Destructor Called -------" << std::endl;
	std::cout << "Go on without me!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &_scavtrap)
{
	std::cout << "------- = overloading Called -------" << std::endl;
	std::cout << _scavtrap.get_name() << "'s get this party started!" << std::endl;
	if (this == &_scavtrap)
		return (*this);
	this->hit_points = _scavtrap.get_hit_points();
	this->max_hit_points = _scavtrap.get_max_hit_points();
	this->energy_points = _scavtrap.get_energy_points();
	this->max_energy_points = _scavtrap.get_max_energy_points();
	this->level = _scavtrap.get_level();
	this->name = _scavtrap.get_name();
	this->melee_attack_damage = _scavtrap.get_melee_attack_damage();
	this->ranged_attack_damage = _scavtrap.get_ranged_attack_damage();
	this->armor_damage_reduction = _scavtrap.get_armor_damage_reduction();
	return (*this);
}

int ScavTrap::get_hit_points(void) const
{
	return (this->hit_points);
}

int ScavTrap::get_max_hit_points(void) const
{
	return (this->max_hit_points);
}

int ScavTrap::get_energy_points(void) const
{
	return (this->energy_points);
}

int ScavTrap::get_max_energy_points(void) const
{
	return (this->max_energy_points);
}

int ScavTrap::get_level(void) const
{
	return (this->level);
}

std::string ScavTrap::get_name(void) const
{
	return (this->name);
}

int ScavTrap::get_melee_attack_damage(void) const
{
	return (this->melee_attack_damage);
}

int ScavTrap::get_ranged_attack_damage(void) const
{
	return (this->ranged_attack_damage);
}

int ScavTrap::get_armor_damage_reduction(void) const
{
	return (this->armor_damage_reduction);
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " 
			  << target << " at range, " << "causing " 
			  << this->ranged_attack_damage << " points of damage!"
			  << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " 
			  << target << " at melee, " << "causing " 
			  << this->melee_attack_damage << " points of damage!"
			  << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "Take " << amount - this->armor_damage_reduction << " Damage!!!" << std::endl;
	this->hit_points -= (amount - this->armor_damage_reduction);
	if (this->hit_points < 0)
	{
		this->hit_points = 0;
		std::cout << "Hit points : " << this->hit_points << std::endl;
		std::cout << "Crit-i-cal!" << std::endl;
		return ;
	}
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "WOW! I hit 'em!" << std::endl; 
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Repair " << amount << " HP!!!" << std::endl;
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
	{
		this->hit_points = this->max_hit_points;
		std::cout << "Hit points : " << this->hit_points << std::endl;
		std::cout << "Health over here!" << std::endl;
		return ;
	}
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Sweet life juice!" << std::endl;
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

void ScavTrap::print_status(void)
{
	std::cout << "------- ScavTrap : " << this->name << "'s status -------" << std::endl;
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Max hit points : " << this->max_hit_points << std::endl;
	std::cout << "Energy points : " << this->energy_points << std::endl;
	std::cout << "Max energy points : " << this->max_energy_points << std::endl;
	std::cout << "Level : " << this->level << std::endl;
	std::cout << "Name : " << this->name << std::endl;
	std::cout << "Melee attack damage : " << this->melee_attack_damage << std::endl;
	std::cout << "Ranged attack damage : " << this->ranged_attack_damage << std::endl;
	std::cout << "Armor damage reduction : " << this->armor_damage_reduction << std::endl;
}