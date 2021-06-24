#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &_scavtrap);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &_scavtrap);

	void challengeNewcomer(std::string const &target);
};

#endif