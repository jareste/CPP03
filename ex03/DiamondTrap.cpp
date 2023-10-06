/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:19:08 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/06 03:12:04 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unamed_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "Unamed";
	this->ClapTrap::setAttack(30);
	this->ClapTrap::setHitPoints(100);
	this->ClapTrap::setEnergyPoints(50);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->name = name;
	this->ClapTrap::setAttack(30);
	this->ClapTrap::setHitPoints(100);
	this->ClapTrap::setEnergyPoints(50);
}

DiamondTrap::DiamondTrap( const DiamondTrap &src ) : ClapTrap(src.getName() + "_clap_name"), FragTrap(src.getName()), ScavTrap(src.getName())
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = src.getName();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap& diamondTrap )
{
	std::cout << "DiamondTrap operator called" << std::endl;
	if ( this != &diamondTrap )
	{
		this->name = diamondTrap.getName();
		this->ClapTrap::setName(diamondTrap.getName() + "_clap_name");
		this->setHitPoints(diamondTrap.getHitPoints());
		this->setEnergyPoints(diamondTrap.getEnergyPoints());
		this->setAttackDamage(diamondTrap.getAttackDamage());
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond Trap name: " << this->name << std::endl;
	std::cout << "Clap Trap name: " << this->ClapTrap::name << std::endl;
}

std::string	DiamondTrap::getName() const
{
	return (this->name);
}
