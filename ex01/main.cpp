/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:21:17 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 05:40:41 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap l;
	ScavTrap test2("kkkk");

	test2.guardStatus();
	test2.guardGate();
	test2.guardStatus();
	test2.attack("adeu");
	l.attack("s");
	l.attack("s");
	l.attack("s");
	l.attack("s");
	return (0);
}