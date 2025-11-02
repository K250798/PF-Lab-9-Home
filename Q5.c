#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate();
void brighten();
void display();

int image[8][8];
int bright[8][8];

int main(){
    int x;
    srand(time(0));
    while(1){
        printf("--------IMAGEBRIGHTNESS----------\n");
        printf("1.Generate Random Image\n");
        printf("2.Brighten Image\n");
        printf("3.Display Images\n");
        printf("4.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-4): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                generate();
                break;
            case(2):
                brighten();
                break;
            case(3):
                display();
                break;
            case(4):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1-4.\n");
        }
    }
}

void generate(){
    int i,j;
    printf("\n--------GENERATERANDOM----------\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            image[i][j]=rand()%51;
        }
    }
    printf("Random Image Generated Successfully!\n");
    printf("------------------------------\n");
}

void brighten(){
    int i,j;
    printf("\n--------BRIGHTENIMAGE----------\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            bright[i][j]=image[i][j]+10;
        }
    }
    printf("Image Brightened Successfully!\n");
    printf("------------------------------\n");
}

void display(){
    int i,j;
    printf("\n--------ORIGINALIMAGE----------\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%4d",image[i][j]);
        }
        printf("\n");
    }
    printf("\n--------BRIGHTENEDIMAGE----------\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%4d",bright[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------\n");
}
