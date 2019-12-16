#include <stdio.h>


char *name, value_name[10];
int *age,choice,i,count=0,value_age[10];
name = value_name;
age = value_age;


void add(char *add_name, int *add_age) 
{	
	// Getting the input upto 10 names and age
	for(i=0;i<10;i++) {
		scanf("%s", add_name);	
		scanf("%d", add_age);
		add_name++;
		add_age++;
		count++;
	}
	
}

void delete(char *del_name)
{
	// Delete the array from the given name
	for(i=0;i<count;i++) {
		name[i]= "";		
	}
}

void main()
{

  printf("1.Add \t\t\t2.Delete \n3.Display all record \t4.Exit the program \nEnter your choice:");
  scanf("%d",&choice);

  if(choice == 1) {
  	if(count <=10) {
	    add(*name,*age);
    } else {
    	printf("Maximum 10 records can be added");
    }
  }
  else if(choice == 2) {
  	  printf("Enter the name you would like to delete");
  	  name:
      scanf("%d", &name);
      if(name!=NULL) {
      	delete(name);
      }
      else {
      	printf("Please enter a valid name");
      	goto name;
      }
    }
  }
  else if (choice == 3) {
    for(i=0;i<count;i++) {
    	printf("%s", name[i])
		printf("\t %d \n", age[i])
    }
  }
  else(choice == 4) {
	exit();  
  } 
}  
