#include <stdio.h>
/* Let us C Pg#114
Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/
int main(){
	int n=7;
	for(int r=1;r<=n;r++){	
		for(int c=1;c<=2*n-1;c++){
			int a=1;
			if(((r+c)<(n+2*r-1)) && ((r+c)>(n+1))){
				printf("  ");
			}else{
			A:
			if(a!=c && a!=(2*n-c)){
				a++;
				goto A;	
			}
			printf("%c ",64+a);
			}
		}
		printf("\n");
	}
	return 0;
}
