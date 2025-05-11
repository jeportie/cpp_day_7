/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:45:35 by jeportie          #+#    #+#             */
/*   Updated: 2025/05/11 20:27:22 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t len, F f)
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void pElem(const T& elem) { std::cout << elem << std::endl; }

#endif  // ********************************************************* ITER_HPP //
