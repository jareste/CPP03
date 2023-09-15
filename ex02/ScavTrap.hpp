/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 05:09:52 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 09:53:23 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	guardState;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap &src );
		~ScavTrap();
		ScavTrap	&operator=( const ScavTrap& ScavTrap );
		void	guardGate();
		void	guardStatus();
		bool	getGuardState() const;
};

#endif