#include "my_split.h"

char **my_split(const char *str, const char sep) {
    char * string = my_copy(str);
    char * mem_string_start = string;

    char ** result = NULL;

    unsigned int word_counter = 0;
    for(char * c = my_strsep(&string, sep); c != NULL; c = my_strsep(&string, sep)) {
        if(c[0] == '\0') continue;
        ++word_counter;
        result = realloc(result, sizeof(char*) * word_counter);
        result[word_counter - 1] = c;
    }

    free(mem_string_start);
    result = realloc(result, sizeof(char*) * (word_counter + 1));
    result[word_counter] = NULL;
    return result;
}