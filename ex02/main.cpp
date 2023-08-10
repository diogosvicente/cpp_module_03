#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // Criar uma instância de FragTrap
    FragTrap fragTrap("Fragger");

    // Testar os métodos da classe FragTrap
    fragTrap.attack("Enemy1");
    fragTrap.takeDamage(25);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();

    // Testar os getters e setters da classe FragTrap
    std::cout << "Name: " << fragTrap.getName() << std::endl;
    std::cout << "Hit Points: " << fragTrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << fragTrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << fragTrap.getAttackDamage() << std::endl;

    // Criar uma cópia de FragTrap
    FragTrap fragCopy(fragTrap);
    fragCopy.attack("Enemy2");
    fragCopy.highFivesGuys();

    // Atribuir uma cópia a outra instância de FragTrap
    FragTrap fragAssign;
    fragAssign = fragTrap;
    fragAssign.attack("Enemy3");
    fragAssign.highFivesGuys();

    return 0;
}
