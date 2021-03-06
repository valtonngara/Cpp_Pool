/*
** EPITECH PROJECT, 2020
** Epitech 2020
** File description:
** function
*/

#include "func_ptr_enum.h"
#include "func_ptr.h"

void	print_reverse(char *str)
{
    for (int i = strlen(str) - 1; i >= 0; i--)
	printf("%c", str[i]);
    printf("\n");
}

void	print_upper(char *str)
{
    for (int i = 0; i < strlen(str); i++)
	printf("%c", toupper(str[i]));
    printf("\n");
}

void	print_42(__attribute__ ((unused))char *str)
{
    printf("42\n");
}

void	print_normal(char *str)
{
    printf("%s\n", str);
}

void	do_action(action_t action, const char *str)
{
    action_t_func list[] = {
        {PRINT_NORMAL, &print_normal},
        {PRINT_REVERSE, &print_reverse},
        {PRINT_UPPER, &print_upper},
        {PRINT_42, &print_42},
    };

    for (unsigned int i = 0; i < 4; i++) {
        if (action == list[i].action) {
            (*list[i].func)(str);
            return;
        }
    }
}
