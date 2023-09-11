#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long long x,y,z,t;
    cin>>x>>y>>z>>t;
    cout<<y<<","<<z<<","<<x<<","<<t<<"\n"<<x+y+z+t<<"\n"<<x-y+z*t;
    return 0;
}
