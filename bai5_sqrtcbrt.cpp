#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int a;
cin>> a;
cout<<fixed<<setprecision(2)<<sqrt(a)<<"\n"<<fixed<<setprecision(3)<<cbrt(a);
    return 0;
}

