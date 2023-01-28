/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 12:15:41 by areheman          #+#    #+#             */
/*   Updated: 2022/12/26 13:16:55 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

int	main(void)
{
	ScavTrap sv("first");
	ScavTrap sp = sv;
	
	sv.showStatus();
	sp.showStatus();
	sv.attack("second");
	sv.guardGade();
	return 0;
}