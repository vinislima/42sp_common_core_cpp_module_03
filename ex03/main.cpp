/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:07:23 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/28 15:54:22 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\n--- CONSTRUCTION ---" << std::endl;
	DiamondTrap monster("GigaChad");

	std::cout << "\n--- IDENTIFY CHECK (whoAmI) ---" << std::endl;
	monster.whoAmI();

	std::cout << "\n--- TESTING INHERITED METHODS ---" << std::endl;
	monster.guardGate();
	monster.highFivesGuys();

	std::cout << "\n--- TESTING ATTACK & VALUES ---" << std::endl;
	monster.attack("Enemy");

	std::cout << "\n--- DESTRUCTION ---" << std::endl;

	return (0);
}
