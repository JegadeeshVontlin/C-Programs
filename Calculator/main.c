#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main() {
	int i,count=0,sum=0, ddsum=0;
	char *ptr,operation[26],dd_operation[1],op, dp;
	ptr = operation;
	char error[] = "Calculator Doesn't support more than 10 digits";
	for(i=0;i<23;i++)
 	{
		ptr[i] = getc(stdin);	
		count++;	
		if(ptr[i] == 0x0A)	 {
			break;		
		}
	}
	printf("the total value entered is %d \n", count);
	if((ptr[0] == 'a') && (ptr[1] == 'd') && (ptr[2] == 'd'))  {
		//addition(ptr, count, op);	
		if(count >23 ) {
			for(i=3;i<26;i++) {
				sum += atoi((ptr+i));
				if(count==23) {
					dp  = ptr[++i] + ptr[++i];	
					sum += dp + atoi((ptr+i)); 
	printf("the total value entered is %d \n", count);
				}
			}
		}
		else {
			for(i=3;i<26;i++) {
				if (ptr[i] == ' ' ) {
						// Do nothing
						i++;
						sum += atoi((ptr+i));
				}
			}
		}	
				printf("%d\n", sum);
	}

/*	else if((ptr[0] == 's') && (ptr[1] == 'u') && (ptr[2] == 'b')) {*/
/*		subtraction(ptr, count, op);	*/
/*	}*/
/*	*/
/*	else if(ptr[0] == 'm' && ptr[1] == 'u' && ptr[2] == 'l') {*/
/*		multiplication(ptr, count, op);*/
/*	}*/
/*		*/
/*	else if(ptr[0] == 'd' && ptr[1] == 'i' && ptr[2] == 'v') {*/
/*		division(ptr, count, op);*/
/*	}*/
/*		*/
/*	else if(ptr[0] == 'm' && ptr[1] == 'o' && ptr[2] == 'd') {*/
/*		modulo(ptr, count, op);*/
/*	}*/
/*	else {*/
/*		// the operation not supported should be printed out using putc , think the logic*/
/*	}*/

}
