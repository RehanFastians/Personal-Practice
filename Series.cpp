#include <stdio.h>
// Pg#113 Let US C 14
int main(){
	int n;	float sum=0.0;
	printf("\n Enter Number of terms");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		float temp=1;
		for(int j=i;j>0;j--){
			temp*=j;
		}
		sum+=i/temp;
	}
	printf("%f",sum);
	return 0;
}
