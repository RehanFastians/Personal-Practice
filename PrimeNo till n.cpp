#include <stdio.h>
#include <math.h>
//Pg#113 Let US C 14
int main(){
	int n=300;
	scanf("%d",&n);
	for(int i=1; i<=n;i++){
		for(int j=2; j<=i; j++){
			if((i%j!=0) && (i!=j))
			continue;			
			if((i%j==0) && (i!=j))
			break;			
			printf("\n%d",i);
		}	
	}
	return 0;
}
