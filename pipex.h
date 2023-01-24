/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:39:05 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/24 08:31:37 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int		exec_pipeline(int argc, char *argv[], char *envp[]);
char	**split_cmd_flags(char *all_cmd);
int		open_file(char *file_path, int flags);
char	**get_path_var(char *envp[]);
char	*get_good_path(char *cmd, char **lst_path);
#endif

/*-----------------------------------------------
 *PIPEX
 * -> char	**get_path_var(char *envp[]);
 *  	\----------------------------------------
 *  	\ recuper les path bin de la variable d'environnement "PATH" via "envp".
 *  	\		ex[envp = "**envp"]
 *  	\ 		return = **array
 *  	\		\ ex["/nfs/homes/arforgea/bin",
 *  	\		\	"/usr/local/sbin",
 *  	\		\	"/usr/local/bin",
 *  	\		\	"/usr/sbin"...
 *  	\		\--------------------------------
 *  	\ return "NULL" si aucune  variable d'environnement "PATH" n'a été trouvé.
 *  	\----------------------------------------
 *
 * -> char	*get_good_path(char *cmd, char **lst_path);
 *  	\----------------------------------------
 *  	\ recuper le bon path pour "cmd" via "lst_path" (contenant une list des path).
 *  	\ 		ex[cmd = "ls", lst_path = "**lst"]
 *  	\		return = "/usr/bin/ls" (MALLOC !).
 *  	\ return "NULL" si aucun path n'a été trouvé
 *  	\----------------------------------------
 *
 *  	[{ls}, {-l -a}]
 *-------------------------*/
