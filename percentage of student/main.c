#include <stdio.h>
#include <stdlib.h>

main()
{ float p;
  char grade;
    printf("Enter percentage of student:");
    scanf("%f",p);
    if(p>=90)
        grade='A';
    else if(p>=70)
        grade='B';
    else if(p>=50)
        grade='C';
    else
        grade='F';
    printf("Grade=%c",grade);
    getch();

}
