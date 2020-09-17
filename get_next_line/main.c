/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:12:25 by codespace         #+#    #+#             */
/*   Updated: 2020/09/17 18:16:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int     main(void)
{
    int     r;
    char    *line = NULL;

    while ((r = get_next_line(&line)) > 0)
    {
        printf("%s\n", line);
        free(line);
        line = NULL;
    }
    printf("%s\n", line);
    free(line);
    line = NULL;
}