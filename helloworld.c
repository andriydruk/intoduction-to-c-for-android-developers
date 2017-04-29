#include <stdio.h>

#include "fast-inverse-square-root.h"
#include "standart-inverse-square-root.h"

int main() {
    int c;
    scanf("%d", &c);
    printf("Quick inverse square root from %d is %f\n", c, Q_rsqrt(c));
    printf("Standard inverse square root from %d is %f\n", c, rsqrt(c));
    return 0;
}
