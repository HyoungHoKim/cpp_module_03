#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "------- Default Constructor Called -------" << std::endl;
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->name = "Default";
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
}

ClapTrap::ClapTrap (int _hit_points,
					int _max_hit_points,
					int _energy_points,
					int _max_energy_points,
					int _level,
					std::string _name,
					int _melee_attack_damage,
					int _ranged_attack_damage,
					int _armor_damage_reducion)
{
	std::cout << "------- Default Name Constructor Called -------" << std::endl;
	this->hit_points = _hit_points;
	this->max_hit_points = _max_hit_points;
	this->energy_points = _energy_points;
	this->max_energy_points = _max_energy_points;
	this->level = _level;
	this->name = _name;
	this->melee_attack_damage = _melee_attack_damage;
	this->ranged_attack_damage = _ranged_attack_damage;
	this->armor_damage_reduction = _armor_damage_reducion;
}

ClapTrap::ClapTrap(const ClapTrap &_claptrap)
{
	std::cout << "------- Default Copy Constructor Called -------" << std::endl;
	this->hit_points = _claptrap.get_hit_points();
	this->max_hit_points = _claptrap.get_max_hit_points();
	this->energy_points = _claptrap.get_energy_points();
	this->max_energy_points = _claptrap.get_max_energy_points();
	this->level = _claptrap.get_level();
	this->name = _claptrap.get_name();
	this->melee_attack_damage = _claptrap.get_melee_attack_damage();
	this->ranged_attack_damage = _claptrap.get_ranged_attack_damage();
	this->armor_damage_reduction = _claptrap.get_armor_damage_reduction();
}

ClapTrap::~ClapTrap()
{
	std::cout << "------- Default Destructor Called -------" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &_claptrap)
{
	std::cout << "------- Default = overloading Called -------" << std::endl;
	if (this == &_claptrap)
		return (*this);
	this->hit_points = _claptrap.get_hit_points();
	this->max_hit_points = _claptrap.get_max_hit_points();
	this->energy_points = _claptrap.get_energy_points();
	this->max_energy_points = _claptrap.get_max_energy_points();
	this->level = _claptrap.get_level();
	this->name = _claptrap.get_name();
	this->melee_attack_damage = _claptrap.get_melee_attack_damage();
	this->ranged_attack_damage = _claptrap.get_ranged_attack_damage();
	this->armor_damage_reduction = _claptrap.get_armor_damage_reduction();
	return (*this);
}

int ClapTrap::get_hit_points(void) const
{
	return (this->hit_points);
}

int ClapTrap::get_max_hit_points(void) const
{
	return (this->max_hit_points);
}

int ClapTrap::get_energy_points(void) const
{
	return (this->energy_points);
}

int ClapTrap::get_max_energy_points(void) const
{
	return (this->max_energy_points);
}

int ClapTrap::get_level(void) const
{
	return (this->level);
}

std::string ClapTrap::get_name(void) const
{
	return (this->name);
}

int ClapTrap::get_melee_attack_damage(void) const
{
	return (this->melee_attack_damage);
}

int ClapTrap::get_ranged_attack_damage(void) const
{
	return (this->ranged_attack_damage);
}

int ClapTrap::get_armor_damage_reduction(void) const
{
	return (this->armor_damage_reduction);
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " 
			  << target << " at range, " << "causing " 
			  << this->ranged_attack_damage << " points of damage!"
			  << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " 
			  << target << " at melee, " << "causing " 
			  << this->melee_attack_damage << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Take " << amount - this->armor_damage_reduction << " Damage!!!" << std::endl;
	this->hit_points -= (amount - this->armor_damage_reduction);
	if (this->hit_points < 0)
	{
		this->hit_points = 0;
		std::cout << "Hit points : " << this->hit_points << std::endl;
		std::cout << "I can see... the code" << std::endl;
		return ;
	}
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Repair " << amount << " HP!!!" << std::endl;
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
	{
		this->hit_points = this->max_hit_points;
		std::cout << "Hit points : " << this->hit_points << std::endl;
		std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
		return ;
	}
	std::cout << "Hit points : " << this->hit_points << std::endl;
	std::cout << "Good as new, I think. Am I leaking?" << std::endl;
}

void ClapTrap::print_status(void)
{
	std::cout << "------- FR4G-TP : " << this->name << "'s status -------" << std::endl;
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