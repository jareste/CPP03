/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:09:56 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 07:40:00 by jareste-         ###   ########.fr       */
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
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &src )
{
	*this = src;
	std::cout << "Copy construcotr called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap& scavtrap )
{
	this->guardState = scavtrap.getGuardState();
	this->setName(scavtrap.getName());
	this->setHitPoints(scavtrap.getHitPoints());
	this->setEnergyPoints(scavtrap.getEnergyPoints());
	this->setAttackDamage(scavtrap.getAttackDamage());
	return (*this);
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
