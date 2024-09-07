/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:00:08 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 13:08:53 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Ryu("Ryu");
	ClapTrap	Ken("Ken");

	Ryu.attack("Ken");
	Ken.takeDamage(0);
	Ken.attack("Ryu");
	Ryu.takeDamage(0);
	std::cout << "\nOkay this isn't going anywhere..\nOh my god, Ryu got a heart attack but survived !\n\n";
	Ryu.takeDamage(9);
	Ryu.beRepaired(3);
	std::cout << "\nKen is doing a combo !\n\n";
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ryu.takeDamage(0);
	Ken.attack("Ryu");
	std::cout << "\nThat did nothing !\nKen got hit with a cramp !\n\n";
	Ken.takeDamage(10);
	Ken.attack("Ryu");
	Ken.beRepaired(10);
	return (0);
}