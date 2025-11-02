#include <stdio.h>

void length();

int main(){
    int x;
    while(1){
        printf("--------STRINGLENGTH----------\n");
        printf("1.Find Length of String\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                length();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

void length(){
    char str[100];
    char *p;
    int count=0;
    printf("\n--------STRINGLENGTHCALCULATION----------\n");
    printf("Enter String: ");
    scanf("%s",str);
    p=str;
    while(*p!='\0'){
        count++;
        p++;
    }
    printf("Length of String: %d\n",count);
    printf("------------------------------\n");
}
