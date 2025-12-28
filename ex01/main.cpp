/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:07:23 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/27 20:37:05 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "--- CONSTRUCTING ---" << std::endl;
	ScavTrap robot("Serena");

	std::cout << "\n--- TESTING ACTIONS ---" << std::endl;
	robot.attack("Target A");
	robot.takeDamage(10);
	robot.beRepaired(10);
	robot.guardGate();

	std::cout << "\n--- DESTRUCTING ---" << std::endl;

	return (0);
}
