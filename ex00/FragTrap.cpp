FragTrap::FragTrap()
{
	std::cout << "------- Default Constructor Called -------" << std::endl;
	std::cout << "I'm over here!" << std::endl;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->name = "Default";
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::FragTrap(string _name);
{
	std::cout << "------- Name Constructor Called -------" << std::endl;
	std::cout << _name << " is over here!" << std::endl; 
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->name = _name;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &_flagtrap)
{
	std::cout << "------- Copy Constructor Called -------" << std::endl;
	std::cout << _flagtrap.get_name() << " is over here!" << std::endl; 
	this->hit_points = _flagtrap.get_hit_points();
	this->max_hit_points = _flagtrap.get_max_hit_points();
	this->energy_points = _flagtrap.get_energy_points();
	this->max_energy_points = _flagtrap.get_max_energy_points();
	this->level = _flagtrap.get_level();
	this->name = _flagtrap.get_name();
	this->melee_attack_damage = _flagtrap.get_melee_attack_damage();
	this->ranged_attack_damage = _flagtrap.get_ranged_attack_damage();
	this->armor_damage_reduction = _flagtrap.get_armor_damage_reduction();
}

FragTrap::~FragTrap()
{
	std::cout << "------- Destructor Called -------" << std::endl;
}

FragTrap &FragTrap::operator=(const FlagTrap &_flagtrap)
{
	std::cout << "------- = overloading Called -------" << std::endl;
	std::cout << _flagtrap.get_name() << " is over here!" << std::endl;
	if (this == &_flagtrap)
		return (*this);
	this->hit_points = _flagtrap.get_hit_points();
	this->max_hit_points = _flagtrap.get_max_hit_points();
	this->energy_points = _flagtrap.get_energy_points();
	this->max_energy_points = _flagtrap.get_max_energy_points();
	this->level = _flagtrap.get_level();
	this->name = _flagtrap.get_name();
	this->melee_attack_damage = _flagtrap.get_melee_attack_damage();
	this->ranged_attack_damage = _flagtrap.get_ranged_attack_damage();
	this->armor_damage_reduction = _flagtrap.get_armor_damage_reduction();
	return (*this);
}

int FragTrap::get_hit_points(void) const
{
	return (this->hit_points);
}

int FragTrap::get_max_hit_points(void) const
{
	return (this->max_hit_points);
}

int FragTrap::get_energy_points(void) const
{
	return (this->energy_points);
}

int FragTrap::get_max_energy_points(void) const
{
	return (this->max_energy_points);
}

int FragTrap::get_level(void) const
{
	return (this->level);
}

std::string FragTrap::get_name(void) const
{
	return (this->name);
}

int FragTrap::get_melee_attack_damage(void) const
{
	return (this->melee_attack_damage);
}

int FragTrap::get_ranged_attack_damage(void) const
{
	return (this->ranged_attack_damage);
}

int FragTrap::get_armor_damage_reduction(void) const
{
	return (this->armor_damage_reduction);
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " 
			  << target << " at range, " << "causing " 
			  << this->ranged_attack_damage << " points of damage!"
			  << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " 
			  << target << " at melee, " << "causing " 
			  << this->melee_attack_damage << " points of damage!"
			  << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << 
	this->hit_points -= (amount - this->ranged_attack_reduction);
	if (this->hit_points < 0)
		this->hit_points = 0;
}

void FragTrap::beRepaired(unsigned int amount);
void FragTrap::vaulthunter_dot_exe(std::string const &target);