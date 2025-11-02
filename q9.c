#include <stdio.h>

void bill();

int main(){
    int x;
    while(1){
        printf("--------GROCERYBILL----------\n");
        printf("1.Calculate Customer Bill\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                bill();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

void bill(){
    char cname[100],iname[100];
    int n,i,qty;
    float price,total=0,itemtotal;
    printf("\n--------CUSTOMERBILL----------\n");
    printf("Enter Customer Name: ");
    scanf("%s",cname);
    printf("Enter Number of Items: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter Item %d Name: ",i);
        scanf("%s",iname);
        printf("Enter Quantity: ");
        scanf("%d",&qty);
        printf("Enter Price per unit: ");
        scanf("%f",&price);
        itemtotal=qty*price;
        printf("Item Total: %.2f\n",itemtotal);
        total+=itemtotal;
    }
    printf("\n--------FINALBILL----------\n");
    printf("Customer: %s\n",cname);
    printf("Total Amount: %.2f\n",total);
    printf("------------------------------\n");
}
