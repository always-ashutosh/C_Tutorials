# include<stdio.h>
int main(){

    int a ,b , c ;
    printf("enter a :");
    scanf("%d" , &a);
    printf("enter b :");
    scanf("%d", &b);
    printf("enter c :");
    scanf("%d", &c);

    if(a<b && a<c) {
        printf("a %d is smallest number" , a);
    }
    else if(b<a && b<c) {
        printf("b %d is smallest number" , b);
    }   
    else {
        printf("c %d is smallest number" , c); 
    } 
    return 0;
}