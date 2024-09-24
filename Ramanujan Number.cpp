#include <stdio.h>
// Let Us Pg#114

/*Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit.*/
int main(){
	for(int a=1;a<50;a++){
		for(int b=a;b<50;b++){
			int c = a*a*a + b*b*b;
//			if(c>10000) continue;
			for(int i=a+1;i<50;i++){
				for(int j=i;j<50;j++){
					int k=i*i*i+j*j*j;
					if(k==c && (i!=a && j!=b)&& (i!=b && j!=a))
					printf("\n(%d,%d),(%d,%d),%d",a,b,i,j,c);
				}
			}
		}
	}	
	return 0;
}
