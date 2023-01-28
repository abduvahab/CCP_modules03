/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:14:59 by areheman          #+#    #+#             */
/*   Updated: 2022/12/26 16:08:19 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string		name;
		unsigned int	hit_pts;
		unsigned int	eng_pts;
		unsigned int	atk_dmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap& obj);
		void	takeDamage(unsigned int amount);
		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
		void	showStatus();
	
};

#endif