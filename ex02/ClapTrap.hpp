/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:22:36 by dioda-si          #+#    #+#             */
/*   Updated: 2023/08/10 16:37:45 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
public:
    ClapTrap(void);
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap(void);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // Getters
    std::string const& getName(void) const;
    int const& getHitPoints(void) const;
    int const& getEnergyPoints(void) const;
    int const& getAttackDamage(void) const;

    // Setters
    void setName(const std::string& name);
    void setHitPoints(int value);
    void setEnergyPoints(int value);
    void setAttackDamage(int value);
};

#endif
