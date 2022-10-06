/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:54:47 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/07 18:12:34 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaint[4]) ( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	std::string complaintLevel[4] = { "debug", "info", "warning", "error" };
	
	for (int i = 0; i < 4; i++)
	{
		if (level == complaintLevel[i])
			(this->*(complaint[i]))();
	}
}