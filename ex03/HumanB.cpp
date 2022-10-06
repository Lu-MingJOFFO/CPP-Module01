/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:10:46 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/04 17:34:29 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	
}

HumanB::~HumanB(void){}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &inst)
{
	_weap = &inst;
	_weap->getType();
}