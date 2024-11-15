#include <stdio.h>

#define PI 3.1415926539

int main()
{
    int radius = 21;
    int area;

    area = PI * radius * radius;

    printf("Area of Circle of radius %d: %d", radius, area);

    return 0;
}
