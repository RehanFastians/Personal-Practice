#include <stdio.h>
/*
        1
   	   1 1
  	  1 2 1
 	 1 3 3 1
	1 4 6 4 1*/
int main(){
	int n=5;
	for(int r=1;r<=n;r++){
		printf("\t");
		for(int s=1;s<=n-r;s++){
			printf(" ");
		}
		for(int c=1;c<=r;c++){
			int t=1;
			int x=1,z=r-1;
			if(c!=1 && c!=r){
				x=z;
				while(t<=c-2){
					x*=(z-t);
					t++;
					x/=t;
				}
			}		
			printf("%d ",x);
		}
		printf("\n");
	}	
	return 0;
}
