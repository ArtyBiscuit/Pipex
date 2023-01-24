/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infile.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:03:08 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/24 06:46:03 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

int	open_file(char *file_path, int flags)
{
	int	fd;
	if (flags == 0)
		fd = open(file_path, O_RDONLY);
	else if (flags == 1)
		fd = open(file_path, O_WRONLY);
	return (fd);
}
