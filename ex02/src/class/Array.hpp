/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeportie <jeportie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:15:46 by jeportie          #+#    #+#             */
/*   Updated: 2025/05/12 16:25:22 by jeportie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <sys/types.h>
template<typename T>
class Array
{
public:
    Array(void);
    Array(uint n);


private:
	T	_element;
};

#endif  // ******************************************************** ARRAY_TPP //
