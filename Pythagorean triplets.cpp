#include <stdio.h>
#include <math.h>
// Let Us C Pg#114

/*Write a program to generate all Pythogorean Triplets with side
length less than or equal to 30.*/
int main(){
	for(int a=2;a<30;a++){
		for(int b=a;b<30;b++){
				int c=sqrt(a*a+b*b);
				if((c*c)==(a*a + b*b)&& c<=30)
				printf("\n%d,%d,%d",a,b,c);
		}	
	}		
	return 0;
}
