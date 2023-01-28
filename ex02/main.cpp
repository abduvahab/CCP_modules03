/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:41:32 by areheman          #+#    #+#             */
/*   Updated: 2022/12/26 13:44:09 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int	main(void)
{
	FragTrap fg("first");
	FragTrap fv(fg);

	fg.showStatus();
	fv.showStatus();
	fg.attack("second");
	fg.highFivesGuys();
}