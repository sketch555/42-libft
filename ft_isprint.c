/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:47:41 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 22:58:42 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Возвращает ненулевое значение, если аргумент 'c' является
// печатным символом, включая пробел. В противном случае возвращается '0'.
// Значения печатных символов находятся в пределах от '0x20' до '0х7Е'.

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
