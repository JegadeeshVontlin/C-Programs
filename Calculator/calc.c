#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, values[9],sum=0;
	char *ptr_oprn,operation[23],oprn[3];
	ptr_oprn = operation;

	
	for(i=0;i<22;i++) {
		ptr_oprn[i] = getc(stdin);
		//putc(ptr_oprn[i],stdout);
		
		//if(ptr_oprn[i] == ' ') {
			
			//i++;
			//sum += atoi(ptr_oprn[i]);
			//putc(sum, stdout);
		//}

	}
	
	if(ptr_oprn[0] == 'a' && ptr_oprn[1] == 'd' && ptr_oprn[2] == 'd') {
		for(i=3;i<22;i++) {
			while(ptr_oprn[i] == ' ' ) {
				i++;
				sum += ptr_oprn[i];
				printf("%d", sum);
			
			}

				
		}
	}
}
	

