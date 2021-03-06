/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:11:52 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 23:10:21 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Преобразует букву нижнего регистра в соответствующую букву верхнего регистра.
// Если аргументом не буква в нижнем регистре, все возвращается без изменений.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
