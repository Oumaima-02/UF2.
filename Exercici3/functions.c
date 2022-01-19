/*
 * functions.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */
int binari(int num ){
	int  bin=0, x=0, i=1;
	while (num !=0){
		x=num %2;
		num=num /2;
		bin=bin+(x*i);
		i=i*10;

	}
	return bin;
}
