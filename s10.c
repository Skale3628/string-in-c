//string library function
//strcmp

#include<stdio.h>
#include<string.h>

char *mystrrev(char *str){
    char *temp=str;
    while(*temp!='\0'){
        temp++;
    }
    temp--;

    char x;
    while(str<temp){
        x=*str;
        *str=*temp;
        *temp=x;
        str++;
        temp--;
    }
    return str;
}
void main(){
    char str[10]="khana";

    //char arr[10]=strrev(str);
    //puts(arr);

    mystrrev(str);
    puts(str);
}