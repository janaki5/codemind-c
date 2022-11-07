#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int m = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] < m)
            m = arr[i];
    }
    while(true)
    {
        int c = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%m != 0)
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            printf("%d",m);
            break;
        }
        m--;
    }
    return 0;
}