#include <stdio.h>
#include <stdlib.h>

//#include "calculator.h"

int main() {
	int i,sum=0,count=0,value=0;
	char ascii='0',operation[24];
	for(i=0;i<23;i++)
 	{
		operation[i] = getc(stdin);	
		count++;		
	}

	if((operation[0] == 'a') && (operation[1] == 'd') && (operation[2] == 'd'))  {
		//addition((&operation[i]);
		for(i=3;i<count;i++) {
			if (operation[i] == ' ')  {
				// Do nothing
			}			
			i++;
			sum += (int)operation[i] - ascii;
		}	
		printf("%d\n", (int)sum);
	}
/*	else if(ptr_oprn[0] == 's' && ptr_oprn[1] == 'u' && ptr_oprn[2] == 'b') {*/
/*		subraction(*ptr_oprn);*/
/*	}*/
/*	*/
/*	else if(ptr_oprn[0] == 'm' && ptr_oprn[1] == 'u' && ptr_oprn[2] == 'l') {*/
/*		multiplication(*ptr_oprn);*/
/*	}*/
/*		*/
/*	else if(ptr_oprn[0] == 'd' && ptr_oprn[1] == 'i' && ptr_oprn[2] == 'v') {*/
/*		division(*ptr_oprn);*/
/*	}*/
/*		*/
/*	else if(ptr_oprn[0] == 'm' && ptr_oprn[1] == 'o' && ptr_oprn[2] == 'd') {*/
/*		modulo(*ptr_oprn);*/
/*	}*/
/*	else {*/
/*		// the operation not supported should be printed out using putc , think the logic*/
/*	}*/

}
