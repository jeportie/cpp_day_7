/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:21:47 by jeportie          #+#    #+#             */
/*   Updated: 2025/05/12 16:22:21 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template/class/Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> testArray(10);
	for (int i = 0; i < 10; i++)
	{
		testArray[i] = i * 10;
	}
	Array<int> testB(testArray);
	testB[0] = 42;
	std::cout << "testArray: "<< testArray << std::endl;
	std::cout << "testB: "<< testB << std::endl;
}
