#include <stdio.h>
#include <math.h>

int main(){
	long long int n=1000 ,i2, temp, count, nf, nl, newcount;
	for(int i=1;i<n;i++){
		i2=i*i;
		temp=i2;
		count=0;
		while(temp){
			temp/=10;
			count++;
		}
		newcount=(count%2?count/2 +1:count/2);
		nf=i2/pow(10,newcount);
		nl=remainder(i2,pow(10,newcount));
		if(nf + nl==i) 
		printf("\n %lld",i);
	}
	return 0;
}
