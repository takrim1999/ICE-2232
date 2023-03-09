#include<stdio.h>
int main(){
    int new,element,array[8] = {1,2,3,4,5,6,7};
    printf("position you want to insert your new element?\n>");
    scanf("%d",&new);
    printf("your new element?\n>");
    scanf("%d",&element);
    for(int i=0;i<8;i++){
        printf("%d",array[i]);
        if (i!=7){
            printf(",");
        }
    }
    printf("\n");
    printf("Your new element index is : %d\n",new);
    for(int i=7;i>new;i--){
       array[i] = array[i-1];
    }
    array[new] = element;
    
    for(int i=0;i<8;i++){
        printf("%d",array[i]);
        if (i!=7){
            printf(",");
        }
    }
    printf("\n");
    return 0;
}