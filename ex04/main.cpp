#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap supertrap;
	supertrap.print_status();

	SuperTrap supertrap1("sp_model");
	supertrap1.print_status();

	SuperTrap supertrap2(supertrap1);
	supertrap2.print_status();

	supertrap = supertrap2;
	supertrap2.print_status();

	supertrap1.rangedAttack("enermy1");
	supertrap1.meleeAttack("enermy2");

	return (0);
}