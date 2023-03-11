#include <main.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Get the program name from the first argument
    char *program_name = argv[0];

    // Find the last occurrence of a directory separator in the program name
    char *last_sep = strrchr(program_name, '/');

    // If a directory separator was found, increment the pointer to get the filename
    if (last_sep != NULL) {
        program_name = last_sep + 1;
    }

    // Print the program name
    printf("%s\n", program_name);

    return 0;
}

