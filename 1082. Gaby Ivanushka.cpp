#include <iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) printf("%d%s", (i * i + 3 * i - 4) / 2, i==N ? "\n" : " ");
    return 0;
}
