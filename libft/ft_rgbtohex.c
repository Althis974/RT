/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rgbtohex.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mkulhand <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/12 13:42:06 by mkulhand     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/12 14:24:54 by mkulhand    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

unsigned long	ft_rgbtohex(int r, int g, int b)
{
	return (((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff));
}