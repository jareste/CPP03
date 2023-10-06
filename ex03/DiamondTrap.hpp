/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 02:19:02 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/06 03:02:42 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name;
		std::string	getClapTrapName() const;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap( const DiamondTrap &src );
		~DiamondTrap();
		DiamondTrap	&operator=( const DiamondTrap& diamondTrap );
		void	whoAmI();
		std::string	getName() const;
};

#endif
