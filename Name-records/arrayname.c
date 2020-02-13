#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,choice,count=0;
	char *record, record_store[15];	 
	record = record_store;

	
	choose:
	printf("1.Add record \t\t2.Delete record \n3.Display all record \t4.Exit the program \n\nEnter your choice:\n");
	scanf("%d", &choice);
	if(choice == 1) {
		printf("Enter name and age \n");
		/* Check for first entry ,if not increment it by checking count value */
		if(count >10 ) {
			count++;
			scanf("%s",record);
			printf("%s is added \n", record);

		}
		/*if the above condition passes check the record[count] with size of it, 
		if the current record size is 0, pour the data else loop it to check empty record within count value 10. */
		goto choose;
	}
	
	/* when deleting a record, jsut minus the count to one, so the programs works well whwn adding or removing records */
	else if(choice == 2) {
		printf("Enter the name you would like to delete: ");
		scanf("%s", record);
		/*  do a for loop on searching a name in the pointer memories with two dimension array by 
		using sizeof opeartor in input and comparing it with all names in the record */
			
	}
	else if(choice == 3){
		printf("Displaying all records: %d \n",count);
		for(i=0;i<count;i++) {
			printf("%s",  (char*)record);
		}
			//printf("%s", name);
			//printf("%d \n", *age);			 
	}
	else {
		exit(0);
	}
}
