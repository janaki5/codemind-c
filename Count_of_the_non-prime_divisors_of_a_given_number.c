#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int count = 0;
    for(int i=2; i<=num; i++)
    {
        if(num%i == 0)
        {
            int c = 0;
            for(int j=2; j<=(int)sqrt(i); j++)
            {
                if(i%j == 0)
                    c++;
            }
            if(c > 0)
                count++;
        }
    }
    printf("%d",count+1);
    return 0;
}