/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:56:54 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/04 21:32:35 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	ft;
	int	*pointer_ft;

	ft = 0;
	pointer_ft = &ft;
	ft_ft(pointer_ft);
	return (0);
}
