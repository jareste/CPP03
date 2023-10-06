/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:21:17 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/06 03:13:37 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a;
	std::cout << std::endl << std::endl;
	DiamondTrap b("jesus");
	std::cout << std::endl << std::endl;
	DiamondTrap c(a);

	std::cout << std::endl << std::endl;


	std::cout << "c:"<< std::endl;
	c.whoAmI();
	std::cout << "a:"<< std::endl;
	a.whoAmI();
	c = b;
	std::cout << "c:"<< std::endl;
	c.whoAmI();
	std::cout << std::endl << std::endl;
	std::cout << b.getAttackDamage() << " " << b.getHitPoints() << " " << b.getEnergyPoints() << std::endl;
	std::cout << std::endl << std::endl;
	return (0);
}