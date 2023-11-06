//String Function Library 
//1.strlen


#include<stdio.h>
#include<string.h>

int mystrlen(char *str){
    int count=0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}   

void main(){
    char name[20]={'s','h','u','b','h','a','m','k','\0'};
    char *str="yash";
    char sname[30];
    gets(sname);
    puts(sname);
    printf("%d\n",mystrlen(name));
    printf("%d\n",mystrlen(str));
    printf("%d\n",strlen(sname));

}