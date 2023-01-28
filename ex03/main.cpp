/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:29:57 by areheman          #+#    #+#             */
/*   Updated: 2022/12/27 13:00:33 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

int main(void)
{
	DiamondTrap d("diamond");

	d.showStatus();
	DiamondTrap s=d;
	s.showStatus();
	s.whoAmI();
	d.attack("target1");
	d.whoAmI();
}