/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igbocha3 <igbocha3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:24:51 by igbocha3          #+#    #+#             */
/*   Updated: 2022/01/20 22:58:17 by igbocha3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Возвращает ненулевое значение, если аргумент 'c' является
// цифрой от '0' до '9', в противном случае возвращается '0'.

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
