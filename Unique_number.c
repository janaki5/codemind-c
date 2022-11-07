#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    scanf("%s",ch);
    int d = 0;
    for(int i=0; i<strlen(ch); i++)
    {
        int c = 0;
        for(int j=0; j<strlen(ch); j++)
        {
            if(ch[i] == ch[j])
                c++;
        }
        if(c > 1)
        {
            d = 1;
            break;
        }
    }
    if(d == 0)
        printf("%s","Unique Number");
    else
        printf("%s","Not Unique Number");
    return 0;
}