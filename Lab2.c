/* PROGRAM:  Lab2.c
   AUTHOR:   SAVAS ERTURK 
   DATE:     24/01/20
   TOPIC:    Format phone number with 7 digit (xxx-xxxx)
   PURPOSE:  Format given phone number.
   HOURS:    10
*/

#include <stdio.h>
#include <stdlib.h>

	int size=10;
    int num=0;
	int pnumber[7];
	void quitsignal(){
		if(num==0){
			    printf("Quit signal recived.");
			    exit(0);
			}else{
					menu();
			}
	}
	void numberone(){
		if(pnumber[6]==1){
				printf("Invalid phone number: \n");
				printf("Please enter a phone number:\n");
						scanf("%d",&num);
						check();
			}
	}
	void check(){
		if(num==0){
			printf("Quit signal recived.");
						    exit(0);
		}
		 if(num>=1000000 && num<=9999999){
		int i=0;
    	for(i=0;i<7;i++){
	    pnumber[i] = num % 10;
	    num/=10;
    	}
    	numberone();

		 }
    	else{
    		printf("Invalid phone number: \n");
	  		printf("Please enter a phone number:\n");
			scanf("%d",&num);
			check();
	 }

	}

void menu(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
   printf("Please enter a phone number:");
	scanf("%d",&num);
	check();
	printf("\nthe formated phone Number:%d%d%d-%d%d%d%d\n", pnumber[6],pnumber[5],pnumber[4],pnumber[3],pnumber[2],pnumber[1],pnumber[0]);

	menu();
}

int main(){
    menu();
}
