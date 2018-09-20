#include <stdio.h>

int swap(int x, int y)
{
    x = x ^y;
    y = x ^y;
    x = x ^y;
}

int main()
{
    int a = 0;
    int b = 0;
    printf("please enter (a,b)");
    scanf("%d%d",&a,&b);
    printf("before:a=%d b=%d \n",a,b);
    swap(a,b);
    printf("after:a=%d b=%d",a,b);
    return 0;
}