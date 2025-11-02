#include <stdio.h>
#include <string.h>

void anagram();

int main(){
    int x;
    while(1){
        printf("--------ANAGRAMCHECKER----------\n");
        printf("1.Check Anagram Words\n");
        printf("2.EXIT\n");
        printf("------------------------------\n");
        printf("Please enter your choice(1-2): ");
        scanf("%d",&x);
        switch(x){
            case(1):
                anagram();
                break;
            case(2):
                printf("\nExiting program... Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter 1 or 2.\n");
        }
    }
}

void anagram(){
    char s1[100],s2[100];
    int c1[256]={0},c2[256]={0};
    int i,flag=1;
    printf("\n--------CHECKANAGRAM----------\n");
    printf("Enter first word: ");
    scanf("%s",s1);
    printf("Enter second word: ");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++){
        c1[(unsigned char)s1[i]]++;
    }
    for(i=0;s2[i]!='\0';i++){
        c2[(unsigned char)s2[i]]++;
    }
    for(i=0;i<256;i++){
        if(c1[i]!=c2[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Words are ANAGRAMS.\n");
    }else{
        printf("Words are NOT Anagrams.\n");
    }
    printf("------------------------------\n");
}
