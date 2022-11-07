#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int c = 0;
    for(int i=0; i<strlen(str); i++)
    {
        int a = str[i]-'0';
        if(a > c)
            c = a;
    }
    printf("%d",c);
    return 0;
}