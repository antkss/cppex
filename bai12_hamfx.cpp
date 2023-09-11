#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int x,y;
    cin>>x>>y;
    long long int f=(5 * x + 2 * y + x * y);
    cout << f;
    return 0;
}

