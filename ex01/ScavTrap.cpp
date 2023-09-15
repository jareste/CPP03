/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:09:56 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 05:41:05 by jareste-         ###   ########.fr       */
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
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

