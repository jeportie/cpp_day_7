/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:48:24 by jeportie          #+#    #+#             */
/*   Updated: 2025/05/11 20:29:55 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/iter.hpp"

void increment(int& n) { n++; }

int main(void)
{
	// Test with int array
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original int array:" << std::endl;
    iter(arr, len, pElem<int>);
    iter(arr, len, increment);

    std::cout << "Incremented int array:" << std::endl;
    iter(arr, len, pElem<int>);

    // Test with const char* array
    const char* words[] = {"hello", "world", "iter", "template"};
    size_t words_len = sizeof(words) / sizeof(words[0]);

    std::cout << "String array:" << std::endl;
    iter(words, words_len, pElem<const char*>);

    // Test with double array
    double d_arr[] = {1.1, 2.2, 3.3};
    size_t d_len = sizeof(d_arr) / sizeof(d_arr[0]);

    std::cout << "Double array:" << std::endl;
    iter(d_arr, d_len, pElem<double>);

    return 0;
}
