#include <stdio.h>
#include <stdlib.h>

//#include "calculator.h"

void main() {
	int i,sum=0,count=0;
	char ascii='0', *ptr, operation[24];
	ptr = operation;
	for(i=0;i<23;i++)
 	{
		ptr[i] = getc(stdin);	
		count++;	
		if(ptr[i] == 0x0A)	 {
			break;		
		}
	}
			
/*	while(ptr[i] = getc(stdin)	) {*/
/*			i++;*/
/*			count++;*/
/*		if(ptr[i] == 0x0A) {*/
/*			break;*/
/*		}*/
/*	}*/

	if((ptr[0] == 'a') && (ptr[1] == 'd') && (ptr[2] == 'd'))  {
		//addition(operation, count, );
	for(i=3;i<count;i++) {
			if (ptr[i] == ' ')  {
				// Do nothing
			}	
			i++;
			//printf("pointer[%d] is %d \n", i, atoi((ptr+i)));		
			sum += atoi((ptr+i));
		}	
		putc(sum,stdout);
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
