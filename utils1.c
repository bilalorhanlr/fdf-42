/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:33 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 16:08:34 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fdf.h"

size_t	w_c(char const *s, char c)
{
	size_t	r;

	r = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
			r++;
		s++;
	}
	return (r);
}
