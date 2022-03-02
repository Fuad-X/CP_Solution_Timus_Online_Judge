#include <stdio.h>
#include <string.h>

int main()
{
    int arr[15001],k=2,i=4, key;
    arr[0]=2;
    arr[1]=3;
    while(k<=15000)
    {
        key = 1;
        for(int j=0; j<k; j++)
        {
            if(i%arr[j]==0){
                key=0; 
                break;
            }
        }
        if(key) arr[k++]=i;
        i++;
    }
    
    scanf("%d",&k);
    while(k--) {
        scanf("%d",&key);
        printf("%d\n",arr[key-1]);
    }
    return 0;
}
