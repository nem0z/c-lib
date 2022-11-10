#include "my_lib/includes.h"
#include "my_lib/my_lib.h"

int main(int argc, char *argv[]) {
    const char * string = "Hello, world!";

    // Example for my_copy
    char * copy = my_copy(string);

    printf("%s = %s\n", string, copy);
    printf("%p != %p\n", &string, &copy);

    // Example for my_strlen
    printf("%zu\n", my_strlen(string));

    // Example for my_strsep

    char * copy_origin_ptr = copy;
    printf("%s\n", my_strsep(&copy, ' '));
    printf("%s\n", copy);

    // Exemple for my_split

    char ** world_array = my_split(string, ' ');
    for(unsigned int i = 0; world_array[i] != NULL; ++i) {
        printf("%s\n", world_array[i]);
    }

    // Exemple for itoa

    const int number = 15080;
    char *number_as_char = my_itoa(number);
    printf("%s\n", number_as_char);

    // Exemple for atoi

    const char * string_int = "32409";
    int string_as_int = my_atoi(string_int);
    printf("%d\n", string_as_int);


    // Free

    for(unsigned int i = 0; world_array[i] != NULL; ++i) {
        free(world_array[i]);
    }
    free(world_array);
    free(copy_origin_ptr);
    free(number_as_char);

    return 0;
}