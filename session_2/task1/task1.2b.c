//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice;
	do{
	printf("Enter 'q' to quit:");
	scanf(" %c",&choice);
	printf("choice%c\n", choice);
	} while(choice!= 'q');
	// complete the rest of the code here
	
    return 0;
}