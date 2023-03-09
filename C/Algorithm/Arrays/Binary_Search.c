#include<stdio.h>
int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10},index,search_element,first,last,middle;
    printf("Enter the element to be searched: ");
    scanf("%d",&search_element);
    first = 0;
    last = 9;
    middle = (first+last)/2;
    while(first<=last)
    {
        if(array[middle]<search_element)
        {
            first = middle+1;
        }
        else if(array[middle]==search_element)
        {
            printf("Element found at index %d\n",middle);
            break;
        }
        else
        {
            last = middle-1;
        }
        middle = (first+last)/2;
    }
    if(first>last)
    {
        printf("Element not found\n");
    }
    return 0;
}
