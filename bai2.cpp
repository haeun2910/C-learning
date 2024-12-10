#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    int a_x = pow(x, 3) + 3 * pow(x, 2) + x + 1;
    printf("%d", a_x);
}