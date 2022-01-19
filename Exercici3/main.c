/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "functions.h"
void main(){
	int num, b;
	printf("Introdueix un número :\n");
	scanf("%d", &num);
	b= binari(num);
	printf("L'equvalencia  en binaris és : %d \n", b);
}

