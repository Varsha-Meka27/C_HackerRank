#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000]; 
    char arr[10];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < 10; i++) 
        arr[i] = 0;
    for (int i = 0; i < len; i++) {
        int x = s[i] - '0';
        if (x >= 0 && x <= 9) 
            arr[x]++;
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
            
    return 0;
}
