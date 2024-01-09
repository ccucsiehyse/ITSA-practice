#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n); //scan size

    //print triangle
    for(int i=0; i<n; i++){
        //print each row
        for(int j=0; j<n-i-1; j++) printf("@");
        
        if(i<=n/2 || i==n-1){
            for(int j=0; j<2*i+1; j++) printf("*");
        } else {
            for(int j=0; j<2*(i-n/2)+1; j++) printf("*");
            for(int j=0; j<(2*i+1)-2*(2*(i-n/2)+1); j++) printf("@");
            for(int j=0; j<2*(i-n/2)+1; j++) printf("*");
        }
        
        for(int j=0; j<n-i-1; j++) printf("@");
        printf("\n");
    }
}