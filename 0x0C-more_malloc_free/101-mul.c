#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_num(char *num) {
    /* Check if the input is a valid number */
    while (*num) {
        if (!isdigit(*num))
            return 0;
        num++;
    }
    return 1;
}

int multiply(char *num1, char *num2) {
    /* Multiply two numbers */
    return atoi(num1) * atoi(num2);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_valid_num(num1) || !is_valid_num(num2)) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}

