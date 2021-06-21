#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
private:
	int hit_points;
	int max_hit_points;
	int energy_points;
	int level;
	std::string name;
	int melee_attack_damage;
	int ranged_attack_damage;
	int armor_damage_reduction;
public:
	FragTrap();
	FragTrap(string _name);
	FragTrap(const FragTrap &_flagtrap);
	~FragTrap();
	FragTrap &operator=(const FlagTrap &_flagtrap);

	int get_hit_points(void) const;
	int get_max_hit_points(void) const;
	int get_energy_points(void) const;
	int get_level(void) const;
	std::string get_name(void) const;
	int get_melee_attack_damage(void) const;
	int get_ranged_attack_damage(void) const;
	int get_armor_damage_reduction(void) const;

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
}

#endif