
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf("%d ", sum);
    int dif = a-b;
    printf("%d\n", dif);

    float c, d;
    scanf("%f %f", &c, &d);
    printf("%.1f %.1f", c+d, c-d);


    return 0;
}
