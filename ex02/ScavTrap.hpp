#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &copy);
		ScavTrap	&operator=(ScavTrap const &copy);
		~ScavTrap(void);

		ScavTrap(std::string const &name);
		void	guardGate(void);
};

#endif