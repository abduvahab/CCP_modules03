/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:27:42 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 13:03:59 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout<<"FragTrap default constructor"<<std::endl;
	name = "";
	hit_pts = 100;
	//eng_pts = 100;
	atk_dmg = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout<<"FragTrap constructor with name"<<std::endl;
	hit_pts = 100;
	//eng_pts = 100;
	atk_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout<<"FragTrap copy constructor"<<std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout<<"FragTrap copy assignement constructor"<<std::endl;
	if (this == &obj)
		return *this;
	name = obj.name;
	hit_pts = obj.hit_pts;
	eng_pts = obj.eng_pts;
	atk_dmg = obj.atk_dmg;
	return (*this);	
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap desstructor"<<std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout<<"FragTrap "<<name<<" want positive hight fives"<<std::endl;
}