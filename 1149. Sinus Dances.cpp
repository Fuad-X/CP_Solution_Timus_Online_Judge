#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string A[250];
    A[0] = "sin(1";
    string _sin = "sin(";
    int n;
    cin >> n;
    string sign = "+";
    string start_Brack = "(";
    string end_Brack = ")";
    for(int i=1; i<=n-1; i++)
    {
        sign[0] = (i%2==0) ? '+' : '-';
        string number = to_string(i+1);
        A[i] = A[i-1] + sign + _sin + number;
    }
    for(int i=0; i<n; i++) for(int j=0;j<=i;j++) A[i] += end_Brack;
    
    sign = "+";
    string S = A[0] + sign + to_string(n);
    
    
    for(int i=n-1, j=1; i>0; i--, j++)
    {
        S = start_Brack + S + end_Brack + A[j] + sign + to_string(i);
    }
    cout << S <<endl;
   
    return 0;
    //((sin(1)+3)sin(1–sin(2))+2)sin(1–sin(2+sin(3)))+1
}
