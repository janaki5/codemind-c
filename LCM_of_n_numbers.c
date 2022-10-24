#include<stdio.h>
int main()
{
    int n;
    int p = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > p)
            p = arr[i];
    }
    int i = p;
    while(true)
    {
        int c = 0;
        for(int j=0; j<n; j++)
        {
            if(i%arr[j] != 0)
            {
                c = 1;
                break;
            }
        }
        if(c == 0)
        {
            printf("%d",i);
            break;
        }
        i += p;
    }
    return 0;
}