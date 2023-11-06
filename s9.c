//string function library
//strcat

#include<stdio.h>
#include<string.h>

char *mystrcat(char *str1,char *str2){
    while(*str1!='\0'){
        str1++;
    }
    while(*str2!='\0'){
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
}
void main(){
    //char str1[50]={'s','a','s','h','i','\0'};
    char str1[50];
    gets(str1);
    puts(str1);
    char *str2="bagal";
   // puts(str1);
    puts(str2);
    strcat(str1,str2);
    puts(str1);
    puts(str2);
}