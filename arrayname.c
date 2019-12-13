#include <stdio.h>

void main()
{
  char *name;
  int age,choice;
  scanf("%s %d", name, age);

  printf(" 1.Add 2.Delete 3.Display all record 4.Exit the program \n Enter your choice:");
  scanf("%d, &choice");

  if(choice == 1) {
    add(name,age);
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
    return 0;
  }
 
}
