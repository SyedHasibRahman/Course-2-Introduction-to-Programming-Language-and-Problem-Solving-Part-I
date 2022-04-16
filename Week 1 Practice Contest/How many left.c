#include <stdio.h>

int main() {
    int A, B, a, b;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &a, &b);

    int c = A*B-((a*B)+(b*A)-(a*b));

    printf("%d", c);

    return 0;
}
