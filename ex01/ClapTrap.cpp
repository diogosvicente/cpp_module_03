/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:22:36 by dioda-si          #+#    #+#             */
/*   Updated: 2023/08/10 16:37:45 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"

ClapTrap::ClapTrap(void) : _name("Unnamed"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap constructor called for " << RED << _name << RESET << " and it has: "	<< \
	RED << _hitPoints << RESET << " hitPoints, " << \
	RED << _energyPoints << RESET << " energyPoints and " << \
	RED << _attackDamage << RESET << " attackDamage." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap constructor called for " << RED << _name << RESET << " and it has: "	<< \
	RED << _hitPoints << RESET << " hitPoints, " << \
	RED << _energyPoints << RESET << " energyPoints and " << \
	RED << _attackDamage << RESET << " attackDamage." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << GREEN << "<Begin Copy Constructor>" << RESET << std::endl;
	*this = copy;
	std::cout << GREEN << "<End Copy Constructor>" << RESET << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << GREEN << "<Begin Constructor Using \"=\">" << RESET << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap copy assignment " << GREEN "\"=\"" << RESET << \
	" operator called, you created a copy of " << RED << this->_name << RESET << " and it has: "	<< \
	RED << this->_hitPoints << RESET << " hitPoints, " << \
	RED << this->_energyPoints << RESET << " energyPoints and " << \
	RED << this->_attackDamage << RESET << " attackDamage." << std::endl;
	std::cout << RED << "<End Constructor Using \"=\"/>" << RESET << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called for " << RED << this->_name << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
    {
        if (_energyPoints > 0)
        {
            if (_hitPoints > 0)
            {
                _energyPoints -= 1;
                std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
				std::cout << "Energy points remaining: " << _energyPoints << std::endl;

            }
            else
            {
                std::cout << "ClapTrap " << _name << " is already destroyed and cannot attack." << std::endl;
            }
        }
        else
        {
            std::cout << "ClapTrap " << _name << " has no energy points left and cannot attack." << std::endl;
        }
    }


void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		if (amount >= static_cast<unsigned int>(_hitPoints))
		{
			_hitPoints = 0;
			std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and is destroyed!" << std::endl;
		}
		else
		{
			_hitPoints -= amount;
			std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and now has " << _hitPoints << " hit points." << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is already destroyed and cannot take any more damage." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		if (_hitPoints > 0)
		{
			_hitPoints += amount;
			std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points and now has " << _hitPoints << " hit points." << std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << _name << " is destroyed and cannot be repaired." << std::endl;
		}

		_energyPoints -= 1; // Repairing costs 1 energy point
		std::cout << "Energy points remaining: " << _energyPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has no energy points left and cannot be repaired." << std::endl;
	}
}

std::string const& ClapTrap::getName(void) const
{
    return (this->_name);
}

int const& ClapTrap::getHitPoints(void) const
{
    return (this->_hitPoints);
}

int const& ClapTrap::getEnergyPoints(void) const
{
    return (this->_energyPoints);
}

int const& ClapTrap::getAttackDamage(void) const
{
    return (this->_attackDamage);
}

void ClapTrap::setName(const std::string& name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(int value)
{
    this->_hitPoints = value;
}

void ClapTrap::setEnergyPoints(int value)
{
    this->_energyPoints = value;
}

void ClapTrap::setAttackDamage(int value)
{
    this->_attackDamage = value;
}