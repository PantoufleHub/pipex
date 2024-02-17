/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:17:15 by aperron           #+#    #+#             */
/*   Updated: 2024/02/17 19:12:18 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	check_file(const char *file, int is_file1)
{
	if (access(file, F_OK))
		exit_with_error("File doesn't exist!");
	if (is_file1)
		if (access(file, R_OK))
			exit_with_error("Need permission to read file 1");
	if (!is_file1)
		if (access(file, W_OK))
			exit_with_error("Need permission to write in file 2");
}

void	check_input(int argc, const char **argv)
{
	if (argc != 5)
		exit_with_error("Wrong number of arguments");
	check_file(argv[1], 1);
	check_file(argv[4], 0);
}
