/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:21:17 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 13:11:20 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"


class DiamondTrap:public FragTrap ,public ScavTrap{
	protected:
			std::string name;
	public:
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& obj);
			~DiamondTrap();
			
			DiamondTrap& operator=(const DiamondTrap& obj);
			void	whoAmI();
			void	attack(const std::string& target);
			void	showStatus();
};
#endif