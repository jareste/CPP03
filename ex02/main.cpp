/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:21:17 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 23:05:31 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap test1;
	FragTrap test2("uwu");
	ScavTrap test3("scavO");

	test3.attack("a");
	test1.attack("b");
	test1.highFivesGuys();
	test2.highFivesGuys();
	test2.attack("kkkk");
	return (0);
}