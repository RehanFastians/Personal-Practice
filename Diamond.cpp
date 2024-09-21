#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i=0;
	char name[20];
	printf("\n Enter name :");
	fgets(name,20,stdin);
	printf("\n Enter No. of rows :");
	scanf("%d",&n);
	for(int row=1;row<=n;row++){
		for(int column=1; column<=row;column++){
			A:
			if((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z')){
			printf("%c",name[i]);
			i++;
			}else{
			i=0;
			goto A;
			}
		}
		printf("\n");
	}	
	return 0;
}
