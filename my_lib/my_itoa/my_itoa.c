#include "my_itoa.h"

char * my_itoa(const int value) {
    unsigned int pow = 1;
    int is_negative = value < 0;
    int copy = value;
    if(is_negative) {
        copy *= -1;
    }
    int len = is_negative;

    for(; copy % pow != copy; ++len) {
        pow *= 10;
    }

    char * result = malloc(sizeof(char) * (len + 1 + is_negative));
    result[len--] = '\0';

    pow = 10;
    for(; len >= is_negative; --len) {
        int current = copy % pow;
        copy -= current;

        result[len] = (char) ('0' + current * 10 / pow);
        pow *= 10;
    }

    if(is_negative) {
        result[0] = '-';
    }  
    return result;
}