/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:08:40 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/03 16:08:41 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	randomChump("Zomb1");

	Zombie	*pointer = newZombie("Zomb2");
        pointer->announce();
	delete pointer;

	return 0;
}
