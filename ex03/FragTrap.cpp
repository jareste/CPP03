/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:59:37 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/06 03:14:39 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Undefined", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &src )
{
	*this = src;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap& src )
{
	this->name = (src.getName());
	this->hitPoints = (src.getHitPoints());
	this->energyPoints = (src.getEnergyPoints());
	this->attackDamage = (src.getAttackDamage());
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::string	highfive;

	std::cout << "Hey, " << this->getName() \
	<< "is asking for a gentle 'High Five'!" << std::endl;
	if (!std::getline(std::cin, highfive))
		return ;
	if (highfive == "High Five")
		std::cout << "Thanks for the 'High Five'!" << std::endl;
	else
	{
		std::cout << "How you dare don't giving me a 'High Five'?????? 😡" << std::endl;
		highfive.erase();
	}
}
