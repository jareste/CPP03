/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 04:21:39 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 23:07:40 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap( const ClapTrap &src );
		virtual	~ClapTrap();
		ClapTrap	&operator=( const ClapTrap& ClapTrap );
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	setAttack(unsigned int 	attackDamage);

		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;

		void		setName(std::string name);
		void		setHitPoints(int hitPoints);
		void		setEnergyPoints(int energyPoints);
		void		setAttackDamage(int attackDamage);
};

#endif