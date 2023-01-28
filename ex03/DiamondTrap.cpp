/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:02:40 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 13:08:52 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap():ClapTrap(),FragTrap(),ScavTrap()
{
	std::cout<<"DiamondTrap default constructor"<<std::endl;
	this->hit_pts = this->FragTrap::hit_pts;
	this->eng_pts = this->ScavTrap::eng_pts;
	this->atk_dmg = this->FragTrap::atk_dmg;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"),name(name)
{
	std::cout<<"DiamondTrap constructor with name"<<std::endl;
	this->ClapTrap::name = name + "_clap_name";
	this->hit_pts = this->FragTrap::hit_pts;
	this->eng_pts = this->ScavTrap::eng_pts;
	this->atk_dmg = this->FragTrap::atk_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	std::cout<<"DiamondTrap copy constructor"<<std::endl;
	*this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout<<"DiamondTrap copy assignement constructor"<<std::endl;
	if (this == &obj)
		return *this;
	name = obj.name;
	this->ClapTrap::name =obj.ClapTrap::name;
	hit_pts = obj.hit_pts;
	eng_pts = obj.eng_pts;
	atk_dmg = obj.atk_dmg;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap cdestructor"<<std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout<<"name : "<<name<<std::endl;
	std::cout<<"clap_name : "<<this->ClapTrap::name<<std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}


void	DiamondTrap::showStatus()
{
	std::cout<<"name: "<<name<<std::endl;
	std::cout<<"hit_points: "<<hit_pts<<std::endl;
	std::cout<<"energy_points: "<<eng_pts<<std::endl;
	std::cout<<"attack_damage: "<<atk_dmg<<std::endl;
}