#include<stdio.h>
int main (){
	int i,j,k,l;
	char c;
	printf("Hello there. Welcome. Suppose there are 11 sticks in front of you.You have to pick any number of stics from 1 to 4 (both 1 and 4 included) from 11 stics.Then allow computer to take his chance and choose any number of stics from 1 to 4.The player whose turn comes when 1 stick remains looses or the player who pics the last stick looses...so player how many sticks you chhose\n");
	scanf ("%d",&i);
	if(i>=5 || i<=0){
		printf("invalid choice");
	}
	else
	{ 
		printf ("\nthe number of stick you choose=%d \nsticks remaining =%d\n the computer choose %d\nsticks remaining after first round=%d.\n ...your turn again  user ",i,11-i,5-i,6);
	
		scanf ("%d",&k);
		if(k>=5 || k<=0){
			printf("invalid choice");
		}
		else
	    {
	      	printf("\nthe number of stick you choose=%d \nsticks remaining =%d\n the computer choose %d\nsticks remaining after round=%d..YOu LOOSE\n ",k,6-k,5-k,1); 
	    }

	}




return 0;	
}