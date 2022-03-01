#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int sum = 0;
    if(x<1) while(x<=1) sum+=x++;
    else while(x>=1) sum+=x--;
    printf("%d\n", sum);

    return 0;
}
