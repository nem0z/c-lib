#include "my_strsep.h"

char * my_strsep(char **string, char sep) {
    unsigned int i = 0;
    for(; (*string)[i] != sep && (*string)[i] != '\0'; ++i);

    if((*string)[0] == '\0') {
        return NULL;
    }

    if(i == 0) {
        ++(*string);
        return "";
    }

    char *result = malloc(sizeof(char) * (i+1));

    for(unsigned int j = 0; j < i; ++j) {
        result[j] = (*string)[0];
        ++(*string);
    }

    result[i] = '\0';
    return result;
}