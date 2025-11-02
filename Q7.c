#include <stdio.h>

int factorial();

int main(){
    int x;
    while(1){
        printf("--------FACTORIAL----------\n");
        printf("1.Find Factorial of Number\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                factorial();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

int factorial(){
    int n;
    long long int fact;
    long long int findfact(int);
    printf("\n--------CALCULATEFACTORIAL----------\n");
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid! Enter Non-Negative Number.\n");
        printf("------------------------------\n");
        return 0;
    }
    fact=findfact(n);
    printf("Factorial of %d = %lld\n",n,fact);
    printf("------------------------------\n");
    return 0;
}

long long int findfact(int n){
    if(n==0){
        return 1;
    }
    return n*findfact(n-1);
}
