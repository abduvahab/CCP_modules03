/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:11:26 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 13:03:49 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout<<"ScavTrap default constructor"<<std::endl;
	name = "";
//	hit_pts = 100;
	eng_pts = 50;
//	atk_dmg = 20;
	 
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout<<"ScavTrap constructor with arguments"<<std::endl;
//	hit_pts = 100;
	eng_pts = 50;
//	atk_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout<<"ScavTrap copy constructor"<<std::endl;
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout<<"ScavTrap copy  assignenemnt constructor"<<std::endl;
	if (this == &obj)
		return *this;
	name = obj.name;
	hit_pts = obj.hit_pts;
	eng_pts = obj.eng_pts;
	atk_dmg = obj.atk_dmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap destructor"<<std::endl;
}

void	ScavTrap::guardGade()
{
	std::cout<<"ScavTRap "<<name<<" is now in Gate keeper mode"<<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if ((eng_pts <= 0) || (hit_pts <= 0))
	{
		std::cout<<"No energy points or hit points!"<<std::endl;
		return ;
	}
	eng_pts--;
	std::cout<<"ScavTRap "<<name<<" attacks "<<target<<", causing ";
	std::cout<<atk_dmg<<" points of damage!"<<std::endl;
}

