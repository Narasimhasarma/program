#include<bits/stdc++.h>
void long_sub_array();
int main()
{
    int k,i,j,count=0;
    long  int n;
    printf("enter the size of the array:");
    scanf("%ld",&n);
    long  int arr[n];
    for(i=0;i<n;i++)
    scanf("%ld",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if arr[j]==arr[i]
            count+=1;
        }
    }
printf("%d",count+1);

}