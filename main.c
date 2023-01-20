#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "muhfunctions.h"
#include "libraryDefs.h"


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
	//this routes the application to the appropriate function based on the user input.
	//stdin must be flushed each time or this will not work appropriately
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

//---------------------------------FORMAT SPECIFIERS FUNCTION-------------------------
void formatSpecifiers(){
	//prints out each of the specific format specifiers to the screen and then calls mainMenu()
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

//--------------------------------LIBRARIES FUNCTION----------------------------------
void libraries(){
	//takes a user input from a provided list and opens a web page to that library.
	int userInput;
	printf(" 1 = assert.h\n");
	printf(" 2 = ctype.h\n");
	printf(" 3 = locale.h\n");
	printf(" 4 = math.h\n");
	printf(" 5 = setjmp.h\n");
	printf(" 6 = signal.h\n");
	printf(" 7 = stdarg.h\n");
	printf(" 8 = stdio.h\n");
	printf(" 9 = stdlib.h\n");
	printf(" 10 = string.h\n");
	printf(" 11 = time.h\n");
	printf(" 12 = errno.h\n");
	printf(" 13 = float.h\n");
	printf(" 14 = limits.h\n");
	printf(" 15 = stddef.h\n");
	printf(" 16 = **Back to Main Menu**\n");
	printf("_____________________________\n\n");
	printf(" Select a number to learn more about each library: ");
	scanf("%d", &userInput);
	printf("____________________________________________________\n\n");

	//switch statement start
	switch(userInput){
		case 1:
			fflush(stdin);
			assertH();
			break;
		case 2:
			fflush(stdin);
			cType();
			break;
		case 3:
			fflush(stdin);
			localeLib();
			break;
	}
}// end of libraries function