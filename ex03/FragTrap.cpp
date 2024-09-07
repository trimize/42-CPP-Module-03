/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:18:01 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 17:19:24 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->en = 100;
	this->atk = 30;
	this->ClapTrap::name = name;
	std::cout << "A new Champion appeared !\n";
}

FragTrap::FragTrap(const FragTrap &st) : ClapTrap(st.name)
{
	*this = st;
	std::cout << "Champion " + st.name + " copied !\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Champion " + this->name + " Died !\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "The fight stops, " + this->name + " high fives everybody\n";
}