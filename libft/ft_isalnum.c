/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyou <tyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 19:28:37 by tyou              #+#    #+#             */
/*   Updated: 2021/01/05 20:31:38 by tyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 47 && c < 58) || (c > 96 && c < 123))
		return (1);
	return (0);
}
