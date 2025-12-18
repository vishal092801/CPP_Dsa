#include<stdio.H>
#include<string.h>
void printString(char *s , int size){
    while(*s!='\0'){
        printf("%c" , *s);
        s++;
    }
}

int main(){
    char str[5];
    fgets(str , 5 , stdin);
    printString(str,5);
    return 0;

}