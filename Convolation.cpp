#include <stdio.h>
#include<string.h>

int main(){
	int input[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
	int filter[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	int result[3][3];
	
	for(int ri=0;ri<3;ri++){
		for(int rj=0;rj<3;rj++){
			int ans=0;
			for(int i=ri,a=0;i<ri+3;i++,a++){
				for(int j=rj,b=0;j<rj+3;j++,b++){
					ans+=input[i][j]*filter[a][b];
				}
			}
		result[ri][rj]=ans;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
