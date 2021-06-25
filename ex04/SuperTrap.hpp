#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string _name);
	SuperTrap(const SuperTrap &_supertrap);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap &_supertrap);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};

#endif