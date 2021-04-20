/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atinseau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 23:53:55 by atinseau          #+#    #+#             */
/*   Updated: 2020/11/19 23:54:22 by atinseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}