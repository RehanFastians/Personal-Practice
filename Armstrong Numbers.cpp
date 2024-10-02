#include <stdio.h>
#include <math.h>

int main(){
	int a;
	for(int i=1;i<=500;i++){
		int l=0,t=i;
		while(t>0){
			t/=10;
			l++;
		}
		 t=i;
		int s=0;
		for(int j=1;j<=l;j++){
			s+=pow(t%10,l);
			t/=10;
		}
		if(s==i) printf("\n %d",i);
	}	
	return 0;
}
