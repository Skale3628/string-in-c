//string library function
//strcmp

#include<stdio.h>
#include<string.h>

void main(){
    char *str1="shubham";
    char *str2="shubham";

    int diff=strcmp(str1,str2);
    if(diff==0){
        printf("string are equal\n");
    }else{
            printf("strings are not equal\n");    
}
}