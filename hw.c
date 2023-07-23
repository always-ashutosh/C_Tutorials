# include<stdio.h>

     int main() {
        int side1, side2;
        printf("enter side1");
        scanf("%d" , &side1);

        printf("enter side2");
        scanf("%d" , &side2);

        int area = side1 * side2;
        printf("area is : %d" , area);

        return 0;
     }