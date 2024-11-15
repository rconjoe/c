#include <stdio.h>

// define parameterized macros with expression
#define CIRCLE_AREA(r) (3.14 * r * r)
#define SQUARE_AREA(s) (s * s)

int main()
{
    int radius = 21;
    int side = 5;
    int area;

    area = CIRCLE_AREA(radius);
    printf("Area of circle of radius %d: %d\n", radius, area);

    area = SQUARE_AREA(side);
    printf("Area of square of side %d: %d", side, area);

    return 0;
}
