#include <stdio.h>

void multiply();

int main(){
    int x;
    while(1){
        printf("--------MATRIXMULTIPLICATION----------\n");
        printf("1.Multiply Two Matrices\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                multiply();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

void multiply(){
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,r2,c2,i,j,k;
    printf("\n--------MULTIPLYMATRICES----------\n");
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
        printf("\nMatrix Multiplication Not Possible!\n");
        printf("------------------------------\n");
        return;
    }
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nResultant Matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------\n");
}
