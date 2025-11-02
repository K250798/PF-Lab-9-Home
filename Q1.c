#include <stdio.h>

void binary();

int main(){
    int x;
    while(1){
        printf("--------DECIMALTOBINARY----------\n");
        printf("1.Convert Decimal to Binary\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                binary();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

void binary(){
    int num,b[32],i=0;
    printf("\n--------CONVERSION----------\n");
    printf("Enter Decimal Code: ");
    scanf("%d",&num);
    if(num==0){
        printf("Binary Equivalent: 0\n");
        return;
    }
    while(num>0){
        b[i]=num%2;
        num/=2;
        i++;
    }
    printf("Binary Equivalent: ");
    for(int j=i-1;j>=0;j--) printf("%d",b[j]);
    printf("\n------------------------------\n");
}
