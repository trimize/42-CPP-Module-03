/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teorimize <teorimize@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:00:13 by teorimize         #+#    #+#             */
/*   Updated: 2024/05/28 13:54:13 by teorimize        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string     name;
		unsigned int    hp;
		unsigned int    en;
		unsigned int    atk;
		ClapTrap();

	public:
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap& rhs);

		void    attack(std::string const& target);
		void    takeDamage(unsigned int amount);
		void    beRepaired(unsigned int amount);
};

#endif