#include<bits/stdc++.h>
using namespace std;

/*
Given a number N. Print its factorial.
constraints
1<= N <= 100

Print answer modulo M
where M = 47
*/
int main(){
    int n;
    cin>>n;
    int M = 47;
    long long fact =1;
    for (int i = 2; i <=n; i++)
    {
        fact = (fact * i) % M;
    }
    cout<< fact;
}