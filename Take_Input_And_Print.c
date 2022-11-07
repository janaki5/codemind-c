#include<stdio.h>
int main()
{
    char s[1000];
    fgets(s,1000,stdin);
    printf("%s",s);
    return 0;
}