#include<stdio.h>
int main(){
    int new=0,rem=0,carr=0,array[8]={1,2,3,4,5,6,7};
    for(int i=0;i<=7;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    printf("Index of element you want to delete?\n>");
    scanf("%d",&new);
    // printf("%d\n",new);
    
    for(int i=7;i>=new;i--){
       rem = array[i];
       array[i] = carr;
       carr = rem;
    }
    
    for(int i=0;i<=7;i++){
        printf("%d",array[i]);
    }
    printf("\n");

    return 0;
}