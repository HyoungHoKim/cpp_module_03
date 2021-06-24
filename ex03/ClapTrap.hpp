#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap(int _hit_points,
			 int _max_hit_points,
			 int _energy_points,
			 int _max_energy_points,
			 int _level,
			 std::string _name,
			 int _melee_attack_damage,
			 int _ranged_attack_damage,
			 int _armor_damage_reducion
			);
	ClapTrap(const ClapTrap &_claptrap);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &_claptrap);

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
	void print_status(void);
};

#endif
