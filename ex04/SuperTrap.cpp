#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
: ClapTrap(100, 100, 120, 120, 1, "default", 60, 30, 5), FragTrap(), NinjaTrap()
{
	std::cout << "------- SuperTrap Constructor Called -------" << std::endl;
	this->hit_points = this->FragTrap::get_hit_points();
	this->max_hit_points = this->FragTrap::get_max_hit_points();
	this->energy_points = this->NinjaTrap::get_energy_points();
	this->max_energy_points = this->NinjaTrap::get_max_energy_points();
	this->level = this->ClapTrap::get_level();
	this->name = this->ClapTrap::get_name();
	this->melee_attack_damage = this->NinjaTrap::get_melee_attack_damage();
	this->ranged_attack_damage = this->FragTrap::get_ranged_attack_damage();
	this->armor_damage_reduction = this->FragTrap::get_armor_damage_reduction();
}

SuperTrap::SuperTrap(std::string _name)
: ClapTrap(100, 100, 120, 120, 1, _name, 60, 30, 5), FragTrap(_name), NinjaTrap(_name)
{
	std::cout << "------- SuperTrap Name Constructor Called -------" << std::endl;
	this->hit_points = this->FragTrap::get_hit_points();
	this->max_hit_points = this->FragTrap::get_max_hit_points();
	this->energy_points = this->NinjaTrap::get_energy_points();
	this->max_energy_points = this->NinjaTrap::get_max_energy_points();
	this->level = this->ClapTrap::get_level();
	this->name = this->ClapTrap::get_name();
	this->melee_attack_damage = this->NinjaTrap::get_melee_attack_damage();
	this->ranged_attack_damage = this->FragTrap::get_ranged_attack_damage();
	this->armor_damage_reduction = this->FragTrap::get_armor_damage_reduction();
}

SuperTrap::SuperTrap(const SuperTrap &_supertrap) : ClapTrap(_supertrap)
{
	std::cout << "------- SuperTrap Copy Constructor Called -------" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "------- SuperTrap Destructor Called -------" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &_supertrap)
{
	std::cout << "------- SuperTrap = overloading Called -------" << std::endl;
	if (this == &_supertrap)
		return (*this);
	this->ClapTrap::operator=(_supertrap);
	return (*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	this->FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	this->NinjaTrap::meleeAttack(target);
}