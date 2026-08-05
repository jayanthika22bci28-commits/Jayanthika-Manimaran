#include<stdio.h>
  2 int main ()
  3 {
  4    int x,y,temp;
  5    printf("enter x value: ");
  6    scanf("%d",&x);
  7    printf("\n enter y value: ");
  8    scanf("%d",&y);
  9    printf("before swapping");
 10    printf("\n x=%d y=%d " ,x,y);
 11    temp=x;
 12    x=y;
 13    y=temp;
 14    printf("\n after swapping");
 15    printf("\n x=%d y=%d ",x,y);
 16    return 0;
 17 }
~
