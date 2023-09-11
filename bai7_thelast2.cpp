#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
long int n;
cin>>n;
long int lay1=n%10;
long int lay2=n%100;
cout<<lay1<<"\n"<<lay2;
    return 0;
}

