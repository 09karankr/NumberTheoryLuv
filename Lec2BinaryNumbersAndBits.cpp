#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<< INT_MAX << endl;
  int a = (1LL<<31) -1;              // output - 2147483647
  cout<< a << endl;
  unsigned int b = (1LL<<32) -1;     
  cout<< b << endl;                  // output - 4294967295
}

// signed int -  one bit is reserved for the sign , 
//               sign tells that the number is positve or negative. So signed store both p and n numbers.
// unsigned -    unsigned only for storing positive numbers.