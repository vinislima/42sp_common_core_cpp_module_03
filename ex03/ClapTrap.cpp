/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 21:08:27 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/27 14:11:20 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor for " << _name << " called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap Copy Constructor called." << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap Copy Assignment Operator called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for " << _name << " called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}

	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!" << std::endl;
		return;
	}

	_energyPoints--;
	std::cout	<< "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "is already dead, stop hitting it!" << std::endl;
		return;
	}

	if (amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout	<< "ClapTrap " << _name << " took " << amount
				<< " damage! HP is now " << _hitPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to repair!" << std::endl;
		return;
	}

	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired!" << std::endl;
		return;
	}

	_energyPoints--;
	_hitPoints += amount;

	std::cout	<< "ClapTrap " << _name << " repairs itself, recovering " << amount
				<< " HP! Current HP: " << _hitPoints << "." << std::endl;
}