/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */
int numprimer(int num){
	int  i=1,x=0, primo;
	do{
		primo = num % i;
		i++;
		if (primo == 0){
			x++;
		}
	}while (i<=num);
	if (x==2){
		printf("És un número primer.\n");
	}
	else{
		printf("No és un numero primer.\n");
	}
	return x;
}
