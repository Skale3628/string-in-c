#include<stdio.h>

char* mystrncpy(char*dest,char *src,int n){
    while(n !=0){
        *dest=*src;
        dest++;
        src++;
        n--;
    }
    *dest='\0';
    return dest;
}
void main(){
    char *str="rahul Piche";
    char name[10];
    int n=9;
    mystrncpy(name,str,n);
    puts(name);

}

//output  -->  rahul Pic