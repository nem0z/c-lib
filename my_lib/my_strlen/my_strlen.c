#include "my_strlen.h"

size_t my_strlen(const char *string) {
    for(unsigned int i = 0;; ++i) {
        if(string[i] == '\0') {
            return (size_t) i;
        }
    }
    return (size_t) 0;
}