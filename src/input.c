/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:17:15 by aperron           #+#    #+#             */
/*   Updated: 2024/02/17 22:41:48 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	check_file(char *file)
{
	if (access(file, F_OK))
		exit_with_error("File doesn't exist!");
	if (access(file, R_OK))
		exit_with_error("Need permission to read file 1");
}

void	check_input(int argc, char **argv)
{
	if (argc != 5)
		exit_with_error("Wrong number of arguments");
	check_file(argv[1]);
}
