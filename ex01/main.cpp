/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:08:40 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/03 18:25:46 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	int	i(4);
	
	Zombie	*pointer = zombieHorde(i, "Zombzombs");
	
	for (int j = 0; j < i; j++)
        pointer[j].announce();
	
	delete[] pointer;

	return 0;
}
