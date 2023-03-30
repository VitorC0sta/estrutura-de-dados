#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
    int value = 8;
    int *p_value = &value;

    *p_value  = 8+7;

    printf("value = %d\n", value);
}