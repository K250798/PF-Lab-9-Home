#include <stdio.h>

void display();

int main(){
    int x;
    while(1){
        printf("--------POINTERARRAY----------\n");
        printf("1.Display Array Elements Using Pointer\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                display();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

void display(){
    int arr[5]={10,20,30,40,50};
    int *p;
    int i;
    printf("\n--------DISPLAYELEMENTS----------\n");
    p=arr;
    for(i=0;i<5;i++){
        printf("Element %d: %d\n",i+1,*(p+i));
    }
    printf("------------------------------\n");
}
