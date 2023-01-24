/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:38:42 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/24 08:32:36 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

char **split_cmd_flags(char *all_cmd)
{
	char **cmd_and_flags;

	cmd_and_flags = ft_split(all_cmd, ' ');
	if (!cmd_and_flags)
		return (NULL);
	return (cmd_and_flags);
}

int main(int argc, char *argv[], char *envp[])
{
	exec_pipeline(argc, argv, envp);
	return (0);
}
