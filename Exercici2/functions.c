/*
 * functions.c
 *
 *  Created on: Jan 14, 2022
 *      Author: admin-pg
 */
int time(int num){
    int i, horas, min, dias;
    dias= num/86400;
    horas=num/3600;
    min=num/60;
    printf("dies totals: %d\nHores: %d\nMinuts: %d\nSegons: %d\n", dias, horas,min,num);
}

