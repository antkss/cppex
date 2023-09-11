#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int a,b;
cin>>a>>b;
float c=(float)b/a;
    cout<<(int)c<<"\n"<<fixed<<setprecision(2)<<c;

    return 0;
}

