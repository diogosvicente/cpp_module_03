#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Clap1");
	ClapTrap clap2("Clap2");

	clap1.attack("Enemy1");
	clap2.takeDamage(3);
	clap1.beRepaired(2);

	return 0;
}
