/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patricia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 05:05:01 by patricia          #+#    #+#             */
/*   Updated: 2024/09/27 05:14:04 by patricia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_abs(int Value)
{
	if (Value < 0)
		return (-Value);
	else
		return (Value);
}
#endif