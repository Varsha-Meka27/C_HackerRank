#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int a,b,i,j;
    float c,d,m,n;
    scanf("%d %d %f %f",&a , &b, &c , &d);
    i = a + b;
    j = a - b;
    m = c + d;
    n = c - d;
    printf("%d %d \n", i , j);
    printf("%.1f %.1f", m, n);

    return 0;
}
