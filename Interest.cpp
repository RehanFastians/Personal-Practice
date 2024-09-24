#include <stdio.h>
// Let us C Page#113

/*A machine is purchased which will produce earning of Rs. 1000 per
year while it lasts. The machine costs Rs. 6000 and will have a
salvage value of Rs. 2000 when it is condemned. If 9 percent per
annum can be earned on alternate investments, write a program to
determine what will be the minimum life of the machine to make it
a more attractive investment compared to alternative investment?*/
int main(){
	int count;
	float inv=6000, cost=4000;		
	for(count=0;cost<inv;count++){
		inv+=inv*.09;
		cost+=1000;
	}
	printf("%d",count);
	return 0;
}
