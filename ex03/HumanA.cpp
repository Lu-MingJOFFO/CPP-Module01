/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:10:46 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/04 17:56:35 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &instance) : _name(name), _weap(instance)
{
	_weap.getType();
}

HumanA::~HumanA(void){}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weap.getType() << std::endl;
}