//gets function 


/*
#include<stdio.h>
void main(){
    char name[10];
    printf("enter the name;\n");
    scanf("%[^\n]",name);   //should not use scan f 

    printf("%s\n",name);
}
*/

#include<stdio.h>
void main(){
    char name[20];
    printf("enter name:\n");
    gets(name);
    //printf("%s\n",name);
    puts(name);   //we didnt have to give the format specifier in puts
}
