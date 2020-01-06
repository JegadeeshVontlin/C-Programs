#include <stdio.h>
#include <stdlib.h>

//#include "calculator.h"

int main() {
	int i,sum=0,value=0;
	char ascii='0',*ptr,operation[23];
	ptr = operation;
	

	
	for(i=0;i<6;i++) {
		ptr[i] = getc(stdin);
		//putc(ptr_oprn[i],stdout);		
	}

	if((operation[0] == 'a') && (operation[1] == 'd') && (operation[2] == 'd'))  {
		//addition((char*) &ptr_oprn);	
		//sum = atoi(operation[4]);
		for(i=3;i<22;i++) {
			if(operation[i] == ' ')  {
				operation[i++];
				//sum += operation[i];
				//printf("%d\n", operation[i]);		
				//printf("it is empty maame");
				//printf("operation[%d] is %d \n",i, operation[i]);			
			}
			value = operation[i] - ascii;
			sum +=value;
			//printf("%d\n%d\n%d\n", value, operation[i], ascii);
			//sum += (int)operation[i];
			
			//printf("%d\n", (int)operation[i]);	
		}	
		printf("%d\n",sum);
			//printf("%d", (int)sum);	

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
	





