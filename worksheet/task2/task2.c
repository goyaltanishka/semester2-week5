/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Tanishka Goyal
 * ID: 
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int value[9] ;
	

	
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex);
	// first we need to count the number of characters in the hexadecimal
	int len = strlen(hex);
	for (int i = 0; i < len; i++) {
		char c = hex[i];
		if (c>='0' && c<='9') {
			value[i] = c-'0' ;
		}
		
		else if (c>='A' && c<='F') {
			value[i] = c - 'A'+10 ;
		}
		
		else if (c>='a' && c<='f'){
			value[i] = c - 'a' + 10 ;
		}

		else {
			printf("Error: Invalid Hexadecimal\n");
		}
		decimal = decimal * 16 + value[i];

	}
	
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}