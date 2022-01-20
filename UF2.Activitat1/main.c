/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "functions.h"

void main(){
	int num, i, x=0, primo;
		printf("Introdueix un número:\n");
		scanf("%d", &num);
		while (num<1){
			printf("Introdueix un número:\n");
			scanf("%d", &num);
		}
		num=numprimer(num);

}

