/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:22:40 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 23:06:55 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Возвращает длину строки, оканчивающейся нулевым символом, на которую
// указывает 's'. При определении длины строки нулевой символ не учитывается.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}