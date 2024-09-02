/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:33:04 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/02 16:45:40 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// double	sqrt_newton(double n)
// {
// 	if (n < 0)
// 		return (-1);
// 	if (n == 0)
// 		return (0);
//     double guess = n;
//     double tolerance = 1e-10;  // Define the tolerance level

//     while (1) {
//         double new_guess = (guess + n / guess) / 2;
//         if (fabs(new_guess - guess) < tolerance) {
//             return new_guess;
//         }
//         guess = new_guess;
//     }
// }

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	n = nb;
	if (n >= 2)
	{
		i = 2;
		while (i * i <= n)
		{
			if (i * i == n)
				return (i);
			i++;
		}
	}
	return (0);
}
