#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(const FragTrap &_flagtrap);
	~FragTrap();
	FragTrap &operator=(const FragTrap &_flagtrap);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif