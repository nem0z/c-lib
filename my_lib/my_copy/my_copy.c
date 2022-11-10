#include "my_copy.h"

char *my_copy(const char *to_copy) {
    size_t len = my_strlen(to_copy);
    char* copy = malloc(len+1);

    for(unsigned int i = 0; i <= len; ++i) {
        copy[i] = to_copy[i];
    }

    return copy;
}