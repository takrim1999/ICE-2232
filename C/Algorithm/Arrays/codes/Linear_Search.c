#include<stdio.h>
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10},index=0,search_element=0;
    printf("Enter the element to be searched: ");
    scanf("%d",&search_element);
    while(index<10)
    {
        if(array[index]==search_element)
        {
            printf("Element found at index %d\n",index);
            break;
        }
        index++;
    }
return 0;
}