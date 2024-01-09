#include<stdio.h>

int main(){
    int n, d, ct, ni=0, nj=0, ct_dir=0, num=2;
    int dir[2][4][2] = {{{0,1}, {1,0}, {0,-1}, {-1,0}},
                        {{1,0}, {0,1}, {-1,0}, {0,-1}}};
    
    //scan
    scanf("%d,%d", &n, &d);
    
    d--;
    ct = n-1;
    int a[n][n];
    a[0][0]=1;

    //fill number in array
    while(ct>0){
        for(int i=0; i<ct; i++){
            //update fill position
            ni += dir[d][ct_dir%4][0];
            nj += dir[d][ct_dir%4][1];

            //fill num
            a[ni][nj] = num++;
        }
        ct_dir++;
        if(ct_dir>1 && ct_dir%2==1) ct--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%03d", a[i][j]);
            if(j!=n-1) printf(",");
        }
        printf("\n");
    }

}