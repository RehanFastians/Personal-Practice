#include <stdio.h>
int main(){
	int array[3][10];
	int n1,n2,n3;
	printf("\nEnter first number :");
	scanf("%d",&n1);
	printf("\nEnter second number :");
	scanf("%d",&n2);
	printf("\nEnter third number :");
	scanf("%d",&n3);
	for(int i =0;i<3;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(i==0){
				array[i][j]=n1*(j+1);
			}
			if(i==1){
				array[i][j]=n2*(j+1);
			}
			if(i==2){
				array[i][j]=n3*(j+1);
			}
		}
	}
	for(int i =0;i<3;i++)
	{
		printf("\n");
		for(int j=0;j<10;j++)
		{
			printf(" %d",array[i][j]);
		}
	}	
	return 0;
}
