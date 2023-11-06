//String Function Library 
//2.strcpy


#include<stdio.h>
#include<string.h>

char* mystrlen(char *dest,char* src){
    
    while(*src!='\0'){
        *dest=*src;
        src++;
        dest++;
        
    }
    *dest='\0';
    
}   

void main(){
    char str1[40];
    printf("enter str1:\n");
    gets(str1);
    char str2[30];
    
    puts(str1);
    puts(str2);


    strcpy(str2,str1);

    puts(str1);
    puts(str2);
    
}