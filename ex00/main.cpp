/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 16:07:23 by vinda-si          #+#    #+#             */
/*   Updated: 2025/12/27 16:43:59 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "### TEST 1: Working normally ###" << std::endl;
	ClapTrap a("Alice");

	a.attack("Bob");
	a.takeDamage(5);
	a.beRepaired(5);

	std::cout << "\n### TEST 2: Running out of energy ###" << std::endl;
	ClapTrap b("Bob");

	for (int i = 0; i < 11; i++)
	{
		b.attack("Clone");
	}
	b.beRepaired(5);

	std::cout << "\n### TEST 3: Dying ###" << std::endl;
	ClapTrap c("Charlie");
	c.takeDamage(20);
	c.attack("Someone");
	c.beRepaired(10);

	std::cout << "\n### DESTRUCTORS ###" << std::endl;

	return (0);
}
