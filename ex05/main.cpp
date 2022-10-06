/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:13:22 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/07 11:14:23 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harly;

	harly.complain("debug");
	harly.complain("info");
	harly.complain("warning");
	harly.complain("error");

	return 0;
}