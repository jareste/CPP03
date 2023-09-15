/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:21:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 05:34:58 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default construcotr called" << std::endl;
	name = "Undefined";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap name construcotr called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
	std::cout << "ClapTrap name construcotr called" << std::endl;
	this->name = name;
	this->hitPoints = hitPoints;
	this->energyPoints = energyPoints;
	this->attackDamage = attackDamage;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called for " << this->name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target \
	<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	if (!energyPoints)
		std::cout << "ClapTrap " << this->name \
	<< " died after running out of energyPoints." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " run out of hitPoints after recieving " \
		<< amount << " points of damage " << std::endl; 
		return ;
	}
	std::cout << "ClapTrap " << this->name << " recieved " \
	<< amount << " points of damage, " << this->hitPoints << " left!" << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
		return ;
	}
	hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " being repaired for " \
	<< amount << " points, " << this->hitPoints << " left!" << std::endl;		
	this->energyPoints--;
	if (!energyPoints)
		std::cout << "ClapTrap " << this->name \
	<< " died after running out of energyPoints." << std::endl;
}

void ClapTrap::setAttack(unsigned int	attackDamage)
{
	if (!this->hitPoints || !this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " new attack damage set to: " \
	<< attackDamage << "." << std::endl;
	this->attackDamage = attackDamage;
}
