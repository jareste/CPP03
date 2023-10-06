/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:09:52 by jareste-          #+#    #+#             */
/*   Updated: 2023/10/06 02:55:03 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		bool	guardState;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap &src );
		virtual ~ScavTrap();
		ScavTrap	&operator=( const ScavTrap& ScavTrap );
		void	attack(const std::string& target);
		void	guardGate();
		void	guardStatus();
		bool	getGuardState() const;		
};

#endif