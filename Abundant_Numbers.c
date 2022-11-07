#include<stdio.h>
#include<string.h>
int main(){
    int a = 0,n;
    scanf("%d",&n);
    for(int i=1; i<n; i++)
    {
        if(n%i == 0)
            a += i;
    }
    if(a >= n)
        printf("True");
    else
        printf("False");
    return 0;
}