#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "muhfunctions.h"


//--------------------FUNCTION PROTOTYPES--------------------------------
void mainMenu();
void libraries();
void formatSpecifiers();
//-----------------------------------------------------------------------

//Main Here
int main(){
	mainMenu();
	return 0;
}

//-------------------------MAIN MENU-------------------------------------
void mainMenu(){
	char userInput;
	printf("\n**********Welcome to the C Helper Program**********\n");
	printf("____________________________________________________\n\n");
	printf("    <F> = Format Specifiers  <E> = Exit Program\n");
	printf("    <L> = Libraries          <W> = GCC/GNU on Windows\n");
	printf("    <S> = Escape Sequences   <V> = Virtual Box Setup\n");
	printf("____________________________________________________\n");
    printf("Make your selection: ");
    scanf("%c", &userInput);     

    
    printf("You entered %c.\n",userInput);  

	switch(toupper(userInput)){
		case 'F':
			fflush(stdin);
			formatSpecifiers();
			break;
}

   
} // end of mainMenu function


void formatSpecifiers(){
	printf("Format Specifiers Here\n");
	mainMenu();
}


void libraries(){
	printf("Libraries Here");
}