/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:02:02 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 15:54:08 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->en = 50;
	this->atk = 20;
	std::cout << "A new challenger appeared !\n";
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st.name)
{
	*this = st;
	std::cout << "Challenger " + st.name + " copied !\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Challenger " + this->name + " Died !\n";
}

void	ScavTrap::attack(std::string const& target)
{
	if (this->hp == 0)
		std::cout << "Challenger " + this->name + " is already dead !\n";
	else if (this->en == 0)
		std::cout << "Challenger " + this->name + " is out of energy\n";
	else
	{
		std::cout << "Challenger " + this->name + " attacked " + target + " for " << this->atk << " damage !\n";
		this->en -= 1;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "Challenger " + this->name + " is now guarding\n";
}
