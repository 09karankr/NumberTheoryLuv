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
        fact = (fact * i) % M;            // here modulo is used 
                                          // becoz when finding the factorial of the greater number it gives negative big number , 
                                          // simply means long long cannot hold that big number. 
                                          // thats why modulo come into picture , like A % M result is always smaller than M. 
}
    cout<< fact;           
}

/*
Given a number N. Print its factorial.
constraints
1<= N <= 100

Print answer modulo M
where M = 10^9 + 7   
 --> here we sometimes find this M value, it is very close to integer maximum,
     so for storing the big value inside the int range then , this value of 
    Modulo is used.
    And also it is a prime number thats why we can easily find the multiplicative inverse 
*/