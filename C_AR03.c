#include<stdio.h>

int main(){
    int a, b=0;

    //scan and calculate
    while(scanf("%d", &a)!=EOF) b += a*a*a;

    //print
    printf("%d\n", b);
}