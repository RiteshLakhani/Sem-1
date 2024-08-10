#include<stdio.h>
int main(){
	int i,j,k;	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==1||i==2||i==3){
				printf("* ");
				for(k=0;k<=2;k++){
					printf("  ");
				}
				printf("* ");
				break;
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
