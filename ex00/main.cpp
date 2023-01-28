/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:48:44 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 13:20:48 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main(void)
{
	ClapTrap man1("man1");
	ClapTrap man2("man2");
	
	man1.showStatus();
	man2.showStatus();
	man1.attack("man2");
	man2.takeDamage(8);
	man2.beRepaired(2);
	man2.attack("man1");
	man1.takeDamage(5);
	man1.attack("man2");
	man2.takeDamage(4);
	man2.beRepaired(3);
	man2.attack("man1");
}