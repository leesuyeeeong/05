#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int i, num, key=59;
			while(1){
					printf("Guess a number : ");
					scanf("%d", &num);		
					if(num==key){			
						printf("Congratulation! trials : \n");
						break;		
					}		
					else if(num<key) printf("low!\n");		
					else if(num>key) printf("high!\n");	
					}
	return 0; 
}
