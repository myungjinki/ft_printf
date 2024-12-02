/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyoo <9hrack@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 20:02:08 by hyeyoo            #+#    #+#             */
/*   Updated: 2020/03/16 21:56:41 by hyeyoo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

void	ft_putnbr(int64_t n)
{
	ft_putnbr_fd(n, 1);
}
