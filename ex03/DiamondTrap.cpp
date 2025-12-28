/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:09:59 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 17:19:41 by vinda-si         ###   ########.fr       */
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
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << this->_name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap("Default_Clap_Name"), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap Default constructed!" << std::endl;
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
