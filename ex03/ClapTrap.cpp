/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:00:15 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 15:57:04 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->atk = 0;
	this->hp = 10;
	this->en = 10;
	std::cout << this->name + " is a new contender !\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name + " Died !\n";
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	std::cout << ct.name + " got copied !\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ct)
{
	this->name = ct.name;
	this->atk = ct.atk;
	this->hp = ct.hp;
	this->en = ct.en;
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	if (this->hp == 0)
		std::cout << this->name + " is already dead !\n";
	else if (this->en == 0)
		std::cout << this->name + " is out of energy\n";
	else
	{
		std::cout << this->name + " attacked " + target + " for " << this->atk << " damage !\n";
		this->en -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
		std::cout << this->name + " is already dead !\n";
	else if (this->hp <= amount)
	{
		std::cout << this->name + " died !\n";
		this->hp = 0;
	}
	else
	{
		std::cout << this->name + " took " << amount << " damage !\n";
		this->hp -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp == 0)
		std::cout << this->name + " is already dead !\n";
	else if (this->en == 0)
		std::cout << this->name + " is out of energy !\n";
	else
	{
		std::cout << this->name + " gained " << amount << " hp back !\n";
		this->hp += amount;
	}
}