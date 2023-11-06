//2.strcpy 
//copy a string int other 

#include<stdio.h>
#include<string.h>

void main(){
    char *str1="hardik pandaya";
    char str2[20];

    puts(str1);
    puts(str2);

    //strcpy(str1,str2);   //hardik pandaya   segemntation fault 
                        // T a

    strcpy(str2,str1);

    puts(str1);
    puts(str2);


}