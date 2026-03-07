/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:09:59 by vinda-si          #+#    #+#             */
/*   Updated: 2026/03/07 13:51:06 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name)
{
	this->_name = name;

	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << this->_name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("Default_Clap_Name"), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap Default constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap " << this->_name << " copy constructed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy assignment operator called!" << std::endl;
	if (this != &src)
	{
		ClapTrap::operator=(src);
		this->_name = src._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap: " << this->_name << std::endl;
	std::cout << "My ClapTrap name is: " << ClapTrap::_name << std::endl;
}
