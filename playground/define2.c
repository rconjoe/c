#include <stdio.h>

// define macro with expression
#define PI (22/7)

int main()
{
    int radius = 7;
    int area;

    area = PI * radius * radius;

    printf("Area of Circle of radius %d: %d", radius, area);

    return 0;
}
