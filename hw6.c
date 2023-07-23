#include<stdio.h>
int main(){
    char ch;
    printf("enter character :");
    scanf("%c", &ch );
    if(ch>='0' && ch<='9'){
        printf("character is digit : %c" ,ch);

    }else{
    printf("character is not digit : %c" , ch);
    }
    return 0 ;
}