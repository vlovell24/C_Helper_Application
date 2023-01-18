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
	printf("____________________________________________________\n\n");
    printf("Make your selection: ");
    scanf("%c", &userInput);     
	printf("____________________________________________________\n\n");

	//---------------------------SWITCH STATEMENT-----------------------
	switch(toupper(userInput)){
		case 'F':
			fflush(stdin);
			formatSpecifiers();
			break;
		case 'E':
			fflush(stdin);
			printf("You selected to exit the program. Goodbye\n\n");
			exit(0);
			break;
		case 'L':
			fflush(stdin);
			libraries();
			break;
		case 'W':
			fflush(stdin);
			system("gcc.txt");
			mainMenu();
			break;
		case 'S':
			fflush(stdin);
			escapeSequences();
			break;
		case 'V':
			fflush(stdin);
			system("virtualbox.txt");
			mainMenu();
			break;
		default:
			printf("Invalid selection, please try again.");
			mainMenu();
			break;
	} //end of switch

   
} // end of mainMenu function


void formatSpecifiers(){
	printf(" %%c = Character\n");
	printf(" %%d = Signed Integer\n");
	printf(" %%e or %%E = Scientific Notation of Floats\n");
	printf(" %%f = Float\n");
	printf(" %%hi = Signed Integer\n");
	printf(" %%hu = Unsigned Integer(short)\n");
	printf(" %%i = Unsigned Integer\n");
	printf(" %%l or %%ld or %%li = Long\n");
	printf(" %%lf = Double\n");
	printf(" %%Lf = Long Double\n");
	printf(" %%lu = Unsigned Int or Unsigned Long\n");
	printf(" %%lli or %%lld = Long long\n");
	printf(" %%llu = Unsigned long long\n");
	printf(" %%o = Octal Representation\n");
	printf(" %%p = Pointer\n");
	printf(" %%s = String\n");
	printf(" %%u = Unsigned Integer\n");
	printf(" %%x or %%X = Hexadecimal Representation\n");
	printf(" %%n = Nothing\n");
	printf(" %%%% = Percent\n");
	mainMenu();
}


void libraries(){
	printf("Libraries Here");
}