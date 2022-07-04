/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebresser <ebresser@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:03:00 by ebresser          #+#    #+#             */
/*   Updated: 2022/05/25 08:09:46 by ebresser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	env(t_data *data)
{
	int		i;

	i = 0;
	while (data->envp[i])
		printf("%s\n", data->envp[i++]);
	return (SUCCESS);
}
