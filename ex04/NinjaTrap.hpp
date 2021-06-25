#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string _name);
	NinjaTrap(const NinjaTrap &_scavtrap);
	~NinjaTrap();
	NinjaTrap &operator=(const NinjaTrap &_ninjatrap);

	void meleeAttack(std::string const &target);
	void ninjaShoebox(ClapTrap &_claptrap, std::string const &target);
	void ninjaShoebox(FragTrap &_fragtrap, std::string const &target);
	void ninjaShoebox(ScavTrap &_scavtrap, std::string const &target);
	void ninjaShoebox(NinjaTrap &_ninjatrap, std::string const &target);
};

#endif