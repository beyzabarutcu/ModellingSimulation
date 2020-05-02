#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int player1=NULL, player2=NULL,flag=NULL;
int p1=NULL,p2=NULL;
int score1=0,score2=0;
int total1=0,total2=0;

void Strategies(){
	srand(time(NULL));
	if(p1==1 || p1==3){
		player1=1;	
	} else if(p1==2){
		player1=2;
	} else if(p1==4){
		player1=rand()%2+1;
	}
	if(p2==1 || p2==3){
		player2=1;
	} else if(p2==2){
		player2=2;
	}
	else if(p2==4 ){
		player2=rand()%2+1;
	}
}

int main(){
	 int i,j;
	 srand(time(NULL));
	 
	 printf("\t\t\tLet's play\n");
	 printf("\t\t\tRemember if player's move 1 is  C and 2 is D\n\n");
	 printf("Choose a strategy for player 1:\n1-Always Cooperate\n2-Always Defect\n3-Tit For Tat\n4-Random\n");
	 scanf("%d", &p1);
	 printf("Choose a strategy for player 2:\n1-Always Cooperate\n2-Always Defect\n3-Tit For Tat\n4-Random\n");
	 scanf("%d",&p2);
	 Strategies();
	 for(j=0;j<10;j++){
	 	printf("\n------%d . contest------\n",j);
        for(i=0;i<20;i++){
       	if(player1==1 && player2==1){
			score1=score1+4;
			score2=score2+4;
		} else if(player1==2 && player2==2){
			score1=score1+2;
			score2=score2+2;
		} else if(player1==1 && player2==2){
			score1=score1+0;
			score2=score2+5; 
		}else if(player1==2 && player2==1){
			score1=score1+5;
			score2=score2+0;
		}	
		total1 += score1;
		total2 += score2;
				
        printf("Player1(%d) Score=%d\t\tPlayer2(%d) Score=%d\t\n",player1,score1,player2,score2);
        if(p1==3){
		  player1=player2;
	    }
	    else if(p1==4){
		  player1=rand()%2+1;
    	}
		if(p2==3){
		  player2=player1;
	    } 
		else if(p2==4){
		  player2=rand()%2+1;		
	    }
			     
        score1=0;
        score2=0;
       
       }
       printf("Total score player1=%d\t\tTotal score player2=%d\n",total1,total2);
    }
	
	return 0;
}
