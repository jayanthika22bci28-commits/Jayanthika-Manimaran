  1 #include<stdio.h>
  2 int main()
  3 {
  4    int n,i;
  5    printf("enter number of elements:");
  6    scanf("%d",&n);
  7    int arr[n];
  8    printf("enter %d number:",n);
  9    for(i=0;i<n;++i)
 10    {
 11       scanf("%d",&arr[i]);
 12    }
 13    printf("The array:");
 14    for(i=0;i<n;i++)
 15    {
 16       printf("[%d]",arr[i]);
 17    }
 18    return 0;
 19 }
 20
~
~
