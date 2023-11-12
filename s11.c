#include<stdio.h>
#include<string.h>

char* mystrlwr(char *str){
    while(*str !='\0'){
        if (*str>=65 && *str<=90){
            *str=*str+32;
                    }
                    str++;
    }
    return str;
}

char* mystrupr(char *str){
    while(*str !='\0'){
        if (*str>=97 && *str<=122){
            *str=*str-32;
                    }
                    str++;
    }
    return str;
}

void main(){
    char str[10]={'S','h','A','s','H','i','\0'};
    puts(str);
   mystrlwr(str);
   puts(str);
    mystrupr(str);
    puts(str);

}

//output  -->   ShAsHi
//              shashi
//              SHASHI