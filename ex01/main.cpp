#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap fragtrap;
	FragTrap fragtrap1("model_1"); 
	FragTrap fragtrap2(fragtrap1);
	// 선언과 동시에 초기화를 하면 복사 생성자가 호출된다. 이건 C++ 문법
	FragTrap fragtrap3 = fragtrap2;
	fragtrap3 = fragtrap2;

	fragtrap.print_status();
	fragtrap1.rangedAttack("enermy1");
	fragtrap2.meleeAttack("enermy2");
	fragtrap3.takeDamage(50);
	fragtrap3.takeDamage(1000);
	fragtrap3.beRepaired(27);
	fragtrap3.beRepaired(1000);
	fragtrap2.vaulthunter_dot_exe("enermy3");
	fragtrap2.vaulthunter_dot_exe("enermy4");
	fragtrap2.vaulthunter_dot_exe("enermy5");
	fragtrap2.vaulthunter_dot_exe("enermy6");
	fragtrap2.vaulthunter_dot_exe("enermy7");
	fragtrap2.vaulthunter_dot_exe("enermy8");

	ScavTrap scavtrap;
	ScavTrap scavtrap1("model_1"); 
	ScavTrap scavtrap2(scavtrap1);
	// 선언과 동시에 초기화를 하면 복사 생성자가 호출된다. 이건 C++ 문법
	ScavTrap scavtrap3 = scavtrap1;
	scavtrap3 = scavtrap1;

	scavtrap.print_status();
	scavtrap1.rangedAttack("enermy1");
	scavtrap2.meleeAttack("enermy2");
	scavtrap3.takeDamage(50);
	scavtrap3.takeDamage(1000);
	scavtrap3.beRepaired(27);
	scavtrap3.beRepaired(1000);
	scavtrap2.challengeNewcomer("enermy3");
	scavtrap2.challengeNewcomer("enermy4");
	scavtrap2.challengeNewcomer("enermy5");
	scavtrap2.challengeNewcomer("enermy6");
	scavtrap2.challengeNewcomer("enermy7");
	scavtrap2.challengeNewcomer("enermy8");
	return (0);
}