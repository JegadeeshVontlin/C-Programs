#include <stdio.h>


char *name;
int *age,choice,i;



void add(char *add_name, int *add_age) 
{
	
	char value_name[10];
	int  value_age[10];
	add_name = value_name;
	add_age = value_age;
	
	// Getting the input upto 10 names
	for(i=0;i<10;i++) {
		scanf("%s", add_name);	
		add_name++;	
	}
	
	// Getting the input upto 10 age
	for (i=0;i<10;i++) {
		scanf("%d", add_age);
		add_age++;
	}
	
}

void delete(*name)
{
	// Delete the array from the given name
}

void display() 
{
	// free all the record 
}

void array_exit()
{
 return 0;
}

void main()
{

/*  printf("Enter Your name and age: \n");*/
/*  scanf("%s %d",name,&age);*/
  

  printf("1.Add \t\t\t2.Delete \n3.Display all record \t4.Exit the program \nEnter your choice:");
  scanf("%d",&choice);

  if(choice == 1) {
    add(*name,*age);
  }
  else if(choice == 2) {
    if( (name) && (age) !=NULL) ) {
      printf("Enter the name you would like to delete");
      scanf("%d", &name);
      if(*name==NULL) {
        printf("Enter a name ");
      }
    }
  }
  else if (*name == match_found() ) {
    printf("Record Found: %s",name);
  }
  else if( choice == 3) {
    free(name);
    free(age);
    printf("All records deleted");
  }
  else(choice == 4) {
	array_exit();
  }
 
}  
