#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{

int i, values[9],sol=0;
char oprn[3];


//values[9] = **argv;
/*	printf("%d", argc);*/
/*	printf("%s", argv[1]);*/
/*	printf("%s", argv[2]);*/
	// Checking number of inputs 
	if(argc > 11) {
		printf("Input is out of range, Calculator supports only 9 value \n");
		return 0;
	}

	// Parsing operation
	for(i=1;i<2;i++) {
		oprn[i] = argv[i][i-1];
/*	printf("values are %c \n", oprn[i]);*/
	}

	switch (oprn[1])	{
	
	case 'a':
		for(i=2;i<argc;i++) {
			sol += atoi(argv[i]);
		}
		printf("Additioned values are %d \n",sol);
	break;

	case 's':
		for(i=2;i<argc;i++) {
			sol -= atoi(argv[i]);
		}
		printf("Subtracted values are  %d \n",sol);
	break;

	case 'm':
		for(i=2;i<argc;i++) {
			sol *= atoi(argv[i]);
		}
		printf("Multiplied values are  %d \n",sol);
	break;

	case 'd':
		for(i=2;i<argc;i++) {
			sol /= atoi(argv[i]);
		}
		printf("Divided values are  %d \n",sol);
	break;	

	default:
		printf("Invalid mathematical operation \n");

	}




}
