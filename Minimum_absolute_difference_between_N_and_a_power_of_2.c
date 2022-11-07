#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    double ans;
    while(true)
    {
        ans = pow(2,i);
        if(ans == n)
        {
            printf("%d",0);
            break;
        }
        else
        {
            if(pow(2,i) < n && pow(2,i+1) > n+1)
            {
                if(n-pow(2,i) < pow(2,i+1)-n)
                    printf("%d",(int)(n-pow(2,i)));
                else
                    printf("%d",(int)(pow(2,i+1))-n);
                break;
            }
            i++;
        }
    }
    return 0;
}