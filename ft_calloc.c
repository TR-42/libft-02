/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 03:15:08 by kfujita           #+#    #+#             */
/*   Updated: 2022/04/19 05:22:23 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p_ret;
	size_t	bytes_to_allocate;

	bytes_to_allocate = count * size;
	if (bytes_to_allocate <= 0)
		bytes_to_allocate = 1;
	if (bytes_to_allocate < count && bytes_to_allocate < size)
		return (NULL);
	p_ret = malloc(bytes_to_allocate);
	if (p_ret != NULL)
		ft_bzero(p_ret, bytes_to_allocate);
	return (p_ret);
}
