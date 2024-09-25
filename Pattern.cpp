#include <stdio.h>
// Let US C Pg#114 problem(m)
 /*Write a program to produce the following output:
      1
    2   3
  4   5   6
7   8   9   10
*/
int main(){
	int n=4,counter=1;
	for(int a=1;a<=n;a++){
		for(int space=1;space<=8-2*a;space++){
			printf(" ");
		}
		for(int b=1;b<=a;b++){
			printf("%d   ",counter++);
		}
		printf("\n");
	}		
	return 0;
}
