#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ClapTrap claptrap;
	FragTrap flagtrap("f_model");
	ScavTrap scavtrap("s_model");
	NinjaTrap ninjatrap("t_model");

	ninjatrap.ninjaShoebox(claptrap, "enermy");
	ninjatrap.ninjaShoebox(flagtrap, "enermy");
	ninjatrap.ninjaShoebox(scavtrap, "enermy");
	ninjatrap.ninjaShoebox(ninjatrap, "enermy");

	return (0);
}