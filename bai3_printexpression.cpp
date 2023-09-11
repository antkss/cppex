#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long a[4];
    for(int i=0;i<4;i++){
cin>>a[i];

    }
    sort(a, a + 4);
     long long tong=0;
   for (int i=0;i<4;i++){
     tong=tong+a[i];
   } 
   cout<<a[0]<<","<<a[1]<<","<<a[2]<<","<<a[3];
long long bt=a[1]-a[0]+a[2]*a[3];
cout <<"\n"<<tong<<"\n"<<bt;
    return 0;
}

