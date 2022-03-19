#include <bits/stdc++.h>

using namespace std;

int fun(int index, int sum, int arr[], int size, int comp, int result)
{
    if(index == size)
    {
        result = min(result, abs(comp-sum-sum));
        return result;
    }
    result = fun(index+1, sum, arr, size, comp, result);
    result = fun(index+1, sum+arr[index], arr, size, comp, result);
    return result;
}

int main()
{
    int t, arr[20], s = 0;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> arr[i];
        s+=arr[i];
    }
    cout << fun(0, 0, arr, t, s, s) << endl;
    
    return 0;
}
