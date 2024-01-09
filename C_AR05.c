#include <stdio.h>

int main(){
    int n, s, d, t[30][25]={0}, ct=1, ok;

    scanf("%d", &n);  //scan n

    //scan s, d and check time (n times)
    for(int i=0; i<n; i++){
        scanf("%d %d", &s, &d);
        
        //check if time is ok for each current bus
        for(int j=0; j<ct; j++){
            ok=j;
            for(int k=s+1; k<=d; k++){
                if(t[j][k]==1){ //time is not ok
                    ok=-1;
                    break;
                }
            }
            if(ok!=-1) break;
        }

        //update time (t array)
        if(ok<0){
            //need new bus
            for(int k=s+1; k<=d; k++)
                t[ct][k] = 1;
            ct++;
        } else {
            //update ok bus
            for(int k=s+1; k<=d; k++)
                t[ok][k] = 1;
        }
    }

    //print bus count
    printf("%d\n", ct);
}