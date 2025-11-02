#include <stdio.h>

void swap();
void display();

int lahore[5]={11,22,33,44,55};
int karachi[5]={66,77,88,99,100};

int main(){
    int x;
    while(1){
        printf("--------SWAPARRAYS----------\n");
        printf("1.Display Current Arrays\n");
        printf("2.Swap Arrays\n");
        printf("3.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-3): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                display();
                break;
            case(2):
                swap();
                break;
            case(3):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1-3.\n");
        }
    }
}

void display(){
    int i;
    printf("\n--------ARRAYDATA----------\n");
    printf("Lahore: ");
    for(i=0;i<5;i++){
        printf("%d ",lahore[i]);
    }
    printf("\nKarachi: ");
    for(i=0;i<5;i++){
        printf("%d ",karachi[i]);
    }
    printf("\n------------------------------\n");
}

void swap(){
    int i,temp;
    printf("\n--------SWAPPING----------\n");
    printf("Before Swapping:\n");
    display();
    for(i=0;i<5;i++){
        temp=lahore[i];
        lahore[i]=karachi[i];
        karachi[i]=temp;
    }
    printf("After Swapping:\n");
    display();
}
