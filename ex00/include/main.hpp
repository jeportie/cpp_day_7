/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:45:35 by jeportie          #+#    #+#             */
/*   Updated: 2025/05/11 18:04:58 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

template <typename T>

void swap(T a, T b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>

T min(T a, T b)
{
	return (a < b ? a : b);
}

template <typename T>

T max(T a, T b)
{
	return (a > b ? a : b);
}

#endif  // ********************************************************* MAIN_HPP //
