#include "my_atoi.h"

int my_atoi(const char * value) {
    const int MAX_INT = 2147483647;

    int total = 0;
    int current = 0;

    unsigned int is_negative = value[0] == '-';

    for(unsigned int i = is_negative; i < my_strlen(value); ++i) {
        current = value[i] - '0';
        if(((MAX_INT + is_negative) - current) / 10 < total) {
            return 0;
        }
        total = 10 * total + current;
    }

    if( value[0] == '-') {
        return -1 * total;
    }
    return total;
}