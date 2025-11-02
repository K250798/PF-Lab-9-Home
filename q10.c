#include <stdio.h>

int findhcf(int a,int b);
int findlcm(int a,int b);

int main(){
    int x,a,b;
    while(1){
        printf("--------HCFLCM----------\n");
        printf("1.Calculate HCF\n");
        printf("2.Calculate LCM\n");
        printf("3.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-3): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                printf("\n--------HCF----------\n");
                printf("Enter Two Numbers: ");
                scanf("%d%d",&a,&b);
                printf("HCF: %d\n",findhcf(a,b));
                printf("------------------------------\n");
                break;
            case(2):
                printf("\n--------LCM----------\n");
                printf("Enter Two Numbers: ");
                scanf("%d%d",&a,&b);
                printf("LCM: %d\n",findlcm(a,b));
                printf("------------------------------\n");
                break;
            case(3):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1-3.\n");
        }
    }
}

int findhcf(int a,int b){
    int temp;
    if(a<0) a=-a;
    if(b<0) b=-b;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int findlcm(int a,int b){
    int h;
    if(a==0||b==0) return 0;
    h=findhcf(a,b);
    return (a*b)/h;
}
