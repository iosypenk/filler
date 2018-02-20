/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iosypenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 12:10:29 by iosypenk          #+#    #+#             */
/*   Updated: 2017/10/29 12:10:33 by iosypenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int					s;
	unsigned long int	b;

	b = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r' ||
		*str == '\v' || *str == '\t' || *str == '\f')
		str++;
	s = (*str == '-' ? -1 : 1);
	if (*str == '-' || *str == '+')
		str++;
	while ((*str >= 48 && *str <= 57) && *str)
	{
		if ((b > 922337203685477580 || (b == 922337203685477580
			&& (*str - 48) > 7)) && s == 1)
			return (-1);
		else if ((b > 922337203685477580 || (b == 922337203685477580
		&& (*str - 48) > 8)) && s == -1)
			return (0);
		b = b * 10 + (*str - 48);
		str++;
	}
	return (b * s);
}
