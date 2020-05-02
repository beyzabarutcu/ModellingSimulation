#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int i,n=20;
int initTime=0;
int fA=20, fB=0;
int rnumber=NULL;

int main(){
	srand(time(NULL));
	
	for(i=0; i<=20; i++){
		int rnumber=rand()%20+1;

		if(fA==20){
			fB++;
			fA--;
		} else{
			if(rnumber/20 < 0.5){
				fB++;
				fA--;
			} else{
				fB--;
				fA++;
			}
		}
		if(i==0){
			printf("X(%d)\tProbability:%d\tfleas on A:%d\tfleas on B:%d\n", i,i,fA,fB);
		}else{
			printf("X(%d)\tRandom:%d\tfleas on A:%d\tfleas on B:%d\n", i,rnumber,fA,fB);
		}
	}


	return 0;
}
