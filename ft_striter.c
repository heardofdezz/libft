/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 15:26:25 by maloua-h          #+#    #+#             */
/*   Updated: 2019/02/04 16:09:42 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	int		i;
	char	*str;

	if (s == 0 || f == 0)
		return ;
	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		f(&str[i]);
		i++;
	}
}
