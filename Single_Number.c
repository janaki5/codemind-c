#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<n; i++)
    {
        int c = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
                c++;
        }
        if(c == 1)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}