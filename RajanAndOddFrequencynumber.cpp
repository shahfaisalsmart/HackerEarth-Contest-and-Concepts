/// Author: Mohammad Faisal
// #include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long temp;
    cin >> temp;
    for(int i=1;i<2*n+1;i++)
    {
        long long x;
        cin >> x;
        temp^=x;
    }
    cout<<temp;
    return 0;
}
