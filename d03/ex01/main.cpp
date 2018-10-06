#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << std::endl;

	// testing ScavTrap
	ScavTrap		vaina("Terry");
	ScavTrap		*test3 = new ScavTrap("Fido");
	ScavTrap		test4 = vaina;

	vaina.challengueNewcomer("Fido");
	vaina.challengueNewcomer("Fido");
	vaina.challengueNewcomer("Fido");
	vaina.challengueNewcomer("Fido");
	vaina.challengueNewcomer("Fido");
	vaina.takeDamage(60);
	vaina.beRepaired(30);
	std::cout << std::endl;
	test3->rangedAttack("terry");
	test3->rangedAttack("terry");
	test3->melleaAttack("terry");
	test3->melleaAttack("terry");
	test3->challengueNewcomer("terry");
	std::cout << std::endl;	
	test4.rangedAttack("terry");
	test4.melleaAttack("terry");
	test4.challengueNewcomer("terry");
	test4.challengueNewcomer("terry");
	test4.challengueNewcomer("terry");
	test4.challengueNewcomer("terry");
	std::cout << std::endl;	
	delete test3;
}

