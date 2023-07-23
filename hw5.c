# include <stdio.h>

int main() {
 int a , b, c , sum , avg;
 printf("enter a :");
 scanf("%d",&a);
 printf("enter b :");
 scanf("%d", &b);
 printf("enter c:");
 scanf("%d", &c);

 sum = a + b + c;
 avg = sum / 3; 
 printf("avg is :%d" , avg);

 return 0;

 }