#include<stdio.h>
int main()
{
     int n;                          //size of array
    scanf("%d",&n);
    int student[n];                 //array
    for(int i=0; i<n; i++)
        scanf("%d",&student[i]);
    return 0;
}