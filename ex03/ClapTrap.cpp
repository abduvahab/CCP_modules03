/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:23:25 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 12:50:16 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap():hit_pts(10), eng_pts(10), atk_dmg(0)
{
	std::cout<<"ClapTrap default constructor"<<std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),hit_pts(10), eng_pts(10), atk_dmg(0)
{
	std::cout<<"ClapTrap constructor with parametres"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout<<"ClapTrap copy constructor"<<std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout<<"ClapTrap assignement copy constructor"<<std::endl;
	if ((this) == &obj)
		return (*this);
	this->name = obj.name;
	this->hit_pts = obj.hit_pts;
	this->eng_pts = obj.eng_pts;
	this->atk_dmg = obj.atk_dmg;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap destructor"<<std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if ((eng_pts <= 0) || (hit_pts <= 0))
	{
		std::cout<<"No energy points or hit points!"<<std::endl;
		return ;
	}
	eng_pts--;
	std::cout<<"ClapTrap "<<name<<" attacks "<<target<<", causing ";
	std::cout<<atk_dmg<<" points of damage!"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((eng_pts <= 0) || (hit_pts <= 0))
	{
		std::cout<<"No energy points or hit points!"<<std::endl;
		return ;
	}
	this->hit_pts -= amount;
	if (this->hit_pts < 0)
		this->hit_pts = 0; 
	std::cout<<"ClapTrap "<<name<<" take damage "<<amount<<" hit points"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((eng_pts <= 0) || (hit_pts <= 0))
	{
		std::cout<<"No energy points or hit points!"<<std::endl;
		return ;
	}
	eng_pts--;
	this->hit_pts += amount;
	std::cout<<"ClapTrap "<<name<<" rapaired "<<amount<<" hit points"<<std::endl;	
}

void	ClapTrap::showStatus()
{
	std::cout<<"name: "<<name<<std::endl;
	std::cout<<"hit_points: "<<hit_pts<<std::endl;
	std::cout<<"energy_points: "<<eng_pts<<std::endl;
	std::cout<<"attack_damage: "<<atk_dmg<<std::endl;
}


