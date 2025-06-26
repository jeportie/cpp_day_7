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
	Array<int> test2Array;
	Array<int> testArray(10);
	for (int i = 0; i < 10; i++)
	{
		testArray[i] = i * 10;
	}
	Array<int> testB(testArray);
	testB[0] = 42;
	
	Array<std::string> stringArray(2);
	stringArray[0] = "Jerome";
	stringArray[1] = "Portier";

	Array<std::string> stringTwo(stringArray);
	stringTwo[0] = "Antoine";
	
	std::cout << "testArray2: "<< test2Array << std::endl;
	std::cout << "testArray: "<< testArray << std::endl;
	std::cout << "testB: "<< testB << std::endl;
	std::cout << "stringArray: "<< stringArray << std::endl;
	std::cout << "stringTwo: "<< stringTwo << std::endl;
    try
    {
        std::cout << testArray[10] << std::endl; // Should throw
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception Error: " << e.what() << std::endl;
    }
}
