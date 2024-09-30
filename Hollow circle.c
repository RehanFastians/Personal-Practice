#include <stdio.h>
\\ print hollow circle
int main() {
    int n=5;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            if(r==1 || r==n || c==1|| c==n){
                printf("*  ");
            }else printf("   ");
        }
        printf("\n");
    }

    return 0;
}
