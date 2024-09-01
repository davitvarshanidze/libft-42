/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datodotio       <datodotio@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:06:22 by datodotio        #+#     #+#             */
/*   Updated: 0000/00/00 00:00:00 by datodotio       ###    ########          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *p;
    p = (char *)b;
    while (len > 0)
    {
        p[len - 1] = c;
        len--;
    }
    return (b);
}