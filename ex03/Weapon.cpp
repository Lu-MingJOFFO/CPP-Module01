/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:10:46 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/04 17:59:04 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void){}

std::string const& Weapon::getType()
{
	std::string const& typeRef(_type);
	return typeRef;
}
		
void Weapon::setType(std::string newType)
{
	_type = newType;
}