/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:07:23 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/27 23:50:28 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\n--- CONSTRUCTION PHASE ---" << std::endl;

	FragTrap ash("Ash");
	FragTrap bro("Bro");

	std::cout << "\n--- ATTACK TEST (Damage should be 30) ---" << std::endl;
	ash.attack("Target Dummy");

	std::cout << "\n--- SPECIAL ABILITY TEST ---" << std::endl;
	ash.highFivesGuys();
	bro.highFivesGuys();

	std::cout << "\n--- STATUS TEST (HP & Energy) ---" << std::endl;
	ash.takeDamage(50);
	ash.beRepaired(20);

	std::cout << "Testing Energy consumption:" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		ash.attack("Spam Target");
	}

	std::cout << "\n--- DESTRUCTION PHASE ---" << std::endl;

	return (0);
}
