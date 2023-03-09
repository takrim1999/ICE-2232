#include<stdio.h>
int main(){
int *ptr,n=10;
// use of pointer to change and use another variable data
printf("%d\n",n);
printf("%d\n",&n);
ptr = &n;
*ptr = 4;
printf("%d\n",*ptr);
printf("%d\n",n);
// use of pointer to swap pointer values
int *p,*q;
n = 10;
p = &n;
q = p;
printf("%d\n",*p);
printf("%d\n",*q);
return 0;
}