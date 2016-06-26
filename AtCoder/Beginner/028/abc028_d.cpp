#include <iostream>
#include <iomanip>

using namespace std;

int count_pattern(long long a,long long b,long long c){
    if(a == b && b == c) return 1;
    if(a == b || b == c || a == c) return 3;
    return 6;
}

int main(){
    long long n,k;
    cin >> n >> k;
    long long l = k,r = n - k + 1;
    long long pat=l*r*6 - (l-1)*3 - (r-1)*3 - 5;
    long double ret = (long double)pat/(n*n*n);
    cout << setprecision(20);
    cout << ret << endl;
    return 0;
}