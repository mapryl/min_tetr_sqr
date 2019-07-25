/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_count.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflannel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:30:04 by mflannel          #+#    #+#             */
/*   Updated: 2019/07/25 18:16:54 by mflannel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	h_count(char *line, int *h_arr)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '#')
			h_arr[i / 5] = 1;
		i++;
	}
}
