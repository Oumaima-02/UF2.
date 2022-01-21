/*
 * main.c
 *
 *  Created on: Jan 21, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "functions.h"

void main(){
	int num1, num2, num;
	printf("introdueix el primer valor: \n");
	scanf("%d", &num1);
	printf("Introdueix en segon valor : \n");
	scanf("%d", &num2);
	num= intercanvi(num1, num2);
}

