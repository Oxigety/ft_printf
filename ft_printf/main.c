/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:12:32 by lchapard          #+#    #+#             */
/*   Updated: 2023/11/29 14:12:38 by lchapard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define LETESTPOURLEO "\n test "

int main (void)
{
	//int 	a = 42;
	//int 	*ptr = &a;
	//int	*pnull = NULL;


//	printf("taille : %d\n",ft_printf("%p\n%d\n%c\ngagou?%%%x%u\n", ptr, -42, '!',969696,45));
//	printf("taille : %d\n",printf("%p\n%d\n%c\ngagou?%%%x%u\n", ptr, -42, '!',969696,45));
	
	
	printf("taille : %d\n",ft_printf(LETESTPOURLEO));
	printf("taille : %d\n",printf(LETESTPOURLEO));
	return (0);
}
