/// Author: Mohammad Faisal
// #include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long * arr = new long long[2*n+1];
    for(int i=0;i<2*n+1;i++)
        cin >> arr[i];
    
    map<long long, int> mp;
    for(int i=0;i<2*n+1;i++)
        mp[arr[i]]++;
    map<long long,int>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
        if((it->second)%2!=0)
        {
            cout<<it->first<<endl;
            break;
        }
    // for(it=mp.begin();it!=mp.end();it++){
    //     cout<<it->first <<" "<<it->second<<endl;
    // }
    delete[] arr;
    mp.clear();
    return 0;
}
