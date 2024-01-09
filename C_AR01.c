#include<stdio.h>

int main(){
    int a[100], ct=0;

    //scan if there's a number
    while(scanf("%d", &a[ct++])!=EOF);

    //print in reverse
    while(--ct){
        printf("%d", a[ct-1]);
        if(ct==1) printf("\n");
        else printf(" ");
    }
}