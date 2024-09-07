/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:34:04 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 17:09:24 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hp = this->FragTrap::hp;
	this->en = this->ScavTrap::en;
	this->atk = this->FragTrap::atk;
	std::cout << "A new King appeared !\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &st) : ClapTrap(st.name), ScavTrap(st.name), FragTrap(st.name)
{
	*this = st;
	std::cout << "King " + st.name + " copied !\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "King " + this->name + " Died !\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\nIt is I " + this->name + " son of " + this->ClapTrap::name + " !\n\n";
}