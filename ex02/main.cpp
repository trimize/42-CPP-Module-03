/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:00:08 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 16:26:01 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Ryu("Ryu");
	FragTrap	Ken("Ken");

	Ryu.attack("Ken");
	Ken.takeDamage(30);
	Ken.attack("Ryu");
	Ryu.takeDamage(30);
	std::cout << "\nKen is doing a combo !\n\n";
	Ken.attack("Ryu");
	Ken.attack("Ryu");
	Ryu.takeDamage(60);
	std::cout << "\nRyu won't give up !\n\n";
	Ryu.beRepaired(40);
	Ken.highFivesGuys();
	Ryu.attack("Ken");
	std::cout << "\nKen's friendly gesture did nothing !\nRyu pierced through Ken's heart!\n\n";
	Ken.takeDamage(80);
	Ken.beRepaired(100);
	return (0);
}