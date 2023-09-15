/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:09:56 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 23:11:02 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Undefined", 100, 50, 20)
{
	guardState = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	guardState = false;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap& scavtrap )
{
	this->guardState = scavtrap.getGuardState();
	this->name = scavtrap.getName();
	this->hitPoints = (scavtrap.getHitPoints());
	this->energyPoints = (scavtrap.getEnergyPoints());
	this->attackDamage = (scavtrap.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->getHitPoints() || !this->getEnergyPoints())
	{
		std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target \
	<< ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	int	_EnergyPoints = getEnergyPoints();
	this->setEnergyPoints(_EnergyPoints--);
	if (!getEnergyPoints())
		std::cout << "ScavTrap " << this->getName() \
	<< " died after running out of energyPoints." << std::endl;
}

void	ScavTrap::guardGate()
{
	guardState = true;
	std::cout << "ScavTrap is now in guard mode." << std::endl;
}

void	ScavTrap::guardStatus()
{
	if (!guardState)
		std::cout << "ScavTrap is in idle mode." << std::endl;
	else
		std::cout << "ScavTrap is in guard mode." << std::endl;
}

bool	ScavTrap::getGuardState() const
{
	return (this->guardState);
}
