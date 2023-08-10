/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:22:36 by dioda-si          #+#    #+#             */
/*   Updated: 2023/08/10 16:37:45 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapDefault;
	ClapTrap two;
	std::cout << "------ ------ ------" << std::endl;
	ClapTrap boss("Boss");
	std::cout << "------ ------ ------" << std::endl;
	ClapTrap clap2;
	std::cout << "------ ------ ------" << std::endl;
	clap2 = clapDefault;
	std::cout << "------ ------ ------" << std::endl;
	ClapTrap clap3(boss);
	std::cout << "------ ------ ------" << std::endl;

	ClapTrap clap1("Robo1");	
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	two = clap1;
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(2);
	clap1.takeDamage(1);
	clap1.attack("Enemy1");
	clap1.beRepaired(200);
	clap1.beRepaired(2);
	clap1.takeDamage(10);
	clap1.takeDamage(10);
	clap1.attack("Enemy1");

	return 0;
}
