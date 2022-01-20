#include<stdio.h>

int main(){

    int choice,a,b;

    printf("  1.  Add\n  2.  Sub\n  3.  Mul\n  4.  Div\n");
    printf("Choice Any One\n");
    scanf("%d", &choice);

    printf("Enter Two Number\n");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("ANSWER = %d",a+b);
        break;
    case 2:
        printf("ANSWER = %d",a-b);
        break;
    case 3:
        printf("ANSWER = %d",a*b);
        break;
    case 4:
        printf("ANSWER = %d",a/b);
        break;
    
    default:
        printf("Enter Vaild Oprater");
        break;
    }

    return 0;
}