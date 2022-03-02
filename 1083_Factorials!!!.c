#include <stdio.h>
#include <string.h>

int main()
{
    int x, y, ans=1, l;
    char k[100];
    scanf("%d%s", &x, k);
    l=strlen(k);
    while(x>1) ans*=x,x-=l;
    printf("%d\n", ans);

    return 0;
}
