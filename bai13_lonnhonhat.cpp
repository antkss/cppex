#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y,z,t;
    cin >> x>>y>>z>>t;

    cout<<max({x,y})<<"\n"<<min({z,t})<<"\n"<<max({x,y,z})<<"\n"<<min({x,y,z,t});
    return 0;
}

