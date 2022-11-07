#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num > 1)
    {
        int c = 0;
        for(int i=2; i<=(int)sqrt(num); i++)
        {
            if(num%i == 0)
                c++;
        }
        if(c == 0)
        {
            int temp = num;
            while(temp > 0)
            {
                c = 0;
                int p = temp%10;
                if(p < 2)
                    c = 1;
                else
                {
                    for(int k=2; k<=(int)sqrt(p); k++)
                    {
                        if(p%k == 0)
                            c = 1;
                    }
                }
                if(c == 1)
                    break;
                temp = temp/10;
            }
            if(c == 0)
                printf("Mega Prime");
            else
                printf("Not Mega Prime");
        }
        else
            printf("Not Mega Prime");
    }
    else
        printf("Not Mega Prime");
    return 0;
}