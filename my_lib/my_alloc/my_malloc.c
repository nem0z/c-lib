#include "my_malloc.h"

void * my_realloc(void * ptr, size_t size) {
    void * new_ptr = malloc(size);
    if (ptr == NULL) return new_ptr;

    char * casted_ptr = (char *) ptr;
    for(unsigned int i = 0; casted_ptr[i]; ++i) {
        ((char *) new_ptr)[i] = casted_ptr[i];
    }

    free(ptr);
    return new_ptr;
}