#ifndef SCAVRAP_HPP
# define SCAVRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
private:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int max_energy_points;
	int level;
	std::string name;
	int melee_attack_damage;
	int ranged_attack_damage;
	int armor_damage_reduction;

public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &_scavtrap);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &_scavtrap);

	int get_hit_points(void) const;
	int get_max_hit_points(void) const;
	int get_energy_points(void) const;
	int get_max_energy_points(void) const;
	int get_level(void) const;
	std::string get_name(void) const;
	int get_melee_attack_damage(void) const;
	int get_ranged_attack_damage(void) const;
	int get_armor_damage_reduction(void) const;

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const &target);

	void print_status(void);
};

#endif