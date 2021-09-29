#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char *arr[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(i=a;i<=b;i++)
    {
        if(i>9)
        {
            if(i%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }
        else
        {
            printf("%s\n",arr[i]);
        }
    }
    return 0;
}

