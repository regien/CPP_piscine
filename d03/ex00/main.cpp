#include "FragTrap.hpp"

int	main(void)
{
	FragTrap		test("Lili");
	FragTrap		*ptr = new FragTrap("Nicholas");
	FragTrap		b = test;
	FragTrap		d(test);

	test.vaulthunter_dot_exe("Nicholas");
	test.vaulthunter_dot_exe("Nicholas");
	test.vaulthunter_dot_exe("Nicholas");
	test.vaulthunter_dot_exe("Nicholas");
	test.vaulthunter_dot_exe("Nicholas");
	test.takeDamage(60);
	test.beRepaired(30);
	std::cout << std::endl;
	ptr->rangedAttack("Lili");
	ptr->rangedAttack("Lili");
	ptr->melleaAttack("Lili");
	ptr->melleaAttack("Lili");
	ptr->vaulthunter_dot_exe("Lili");
	ptr->vaulthunter_dot_exe("Lili");
	ptr->vaulthunter_dot_exe("Lili");
	ptr->takeDamage(60);
	ptr->beRepaired(30);
	std::cout << std::endl;
	b.vaulthunter_dot_exe("Nicholas");
	b.vaulthunter_dot_exe("Nicholas");
	b.vaulthunter_dot_exe("Nicholas");
	b.vaulthunter_dot_exe("Nicholas");
	b.vaulthunter_dot_exe("Nicholas");
	b.takeDamage(60);
	b.beRepaired(30);
	std::cout << std::endl;
	d.vaulthunter_dot_exe("Nicholas");
	d.vaulthunter_dot_exe("Nicholas");
	d.vaulthunter_dot_exe("Nicholas");
	d.vaulthunter_dot_exe("Nicholas");
	d.vaulthunter_dot_exe("Nicholas");
	d.takeDamage(60);
	d.beRepaired(30);
	delete ptr;
}

