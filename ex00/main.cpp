/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:21:17 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 05:07:35 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap test1;
	ClapTrap test2("Joselete");

	test1.attack("hola");
	test1.takeDamage(10);
	test1.setAttack(5);
	test2.setAttack(5);
	test1.beRepaired(40);
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	return (0);
}