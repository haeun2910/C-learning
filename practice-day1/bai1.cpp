#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int thuong = a / b;
    int laydu = a % b;
    printf("%d %d", thuong, laydu);
}