#include <iostream>
using namespace std;
int squareRoot(int n){
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(mid*mid==n)return mid;
        if(mid*mid<n) {ans=mid;l=mid+1;}
        else h=mid -1;
    }
    return ans;
}
int main() {
    int n = 27;
    int result=squareRoot(n);
   cout<<result;
    return 0;
}