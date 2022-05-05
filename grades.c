#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n >= 85 && n <= 100)
    {
        printf("A");
    }
    else if(n >= 70 && n <= 84)
    {
        printf("B");
    }
    else if(n >= 55 && n <= 69)
    {
        printf("C");
    }
    else if(n >= 40 && n <= 54)
    {
        printf("D");
    }
    else if(n <= 40)
    {
        printf("F");
    }
    else
    {
        printf("Invalid Grade");
    }
    return 0;
}
