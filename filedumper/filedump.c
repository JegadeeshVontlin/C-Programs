#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(int argc, char *argv[])
{

	FILE *fp;
	char *data_ptr, *data,*length, file_name[50], length_ptr[6] , unit_name[2], data_size[1], default_name[] = "filedump.txt";
	int i,lengthof;
	data_ptr = file_name;
	data = data_size;
	length = length_ptr;

	
	/* Getting the inputs for file */
	
	/* Processing of inputs for file oepration */
	data_ptr = argv[1];
	length = argv[2];
	//lengthof = atoi(argv[2]);	
	for(i=0;i<2;i++) {
		unit_name[i] = argv[3][i];		
	}
	lengthof = atoi((char*)length);
	data = argv[4];
	
	fp = fopen(data_ptr, "w");	
	if(fp == NULL) {
		printf("No File created");		
	}
	else{
		printf("Processing Input  \n");	

		if(data) {
			if(memcmp(unit_name, "B", sizeof(unit_name)) == 0) {
				printf("byte code \n");
				
				for(i=0;i<lengthof;i++) {
					fputs((const char*)data, fp);
				}
				
			}
			else if(memcmp(unit_name, "KB", sizeof(unit_name)) ==0 ) {
				printf("Kilo byte code  \n");
				for(i=0;i<lengthof*1024;i++) {
					fputs((const char*)data, fp);
				}
			}
			else if(memcmp(unit_name, "MB", sizeof(unit_name)) == 0) {
				printf("Mega byte code  \n");
				for(i=0;i<lengthof*1000024;i++) {
					fputs((const char*)data, fp);
				}
			}
			else if(memcmp(unit_name, "GB", sizeof(unit_name)) == 0) {
				printf("Giga byte code  \n");
				for(i=0;i<lengthof*1000000024;i++) {
					fputs((const char*)data, fp);
				}
			}
			else if(memcmp(unit_name, "TB", sizeof(unit_name)) == 0) {
				printf("Tera byte code  \n");
				for(i=0;i<lengthof*1000000000024;i++) {
					fputs((const char*)data, fp);
				}
			}
			else if(memcmp(unit_name, "PB", sizeof(unit_name)) == 0) {
				printf("Peta byte code  \n");
				for(i=0;i<lengthof*1000000000000024;i++) {
					fputs((const char*)data, fp);
				}
			}				
		}	
		else {
			printf("\nNo input character given for payload\n");
		}	
		fclose(fp);		
	} 	

} 
