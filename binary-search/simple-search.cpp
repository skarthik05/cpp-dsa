#include <iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid =  start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key) return mid;
        else if(arr[mid]>=key) end = mid-1;
        else start=mid+1;
        mid =  start+(end-start)/2;
    }
    return -1;
}
int main() {
    int arr[5]={0,1,2,3,4};
    int index = binarySearch(arr,5,0);
    if(index!=-1) cout<<"Key is present at the index: "<<index;
    else cout<<"Key is not present";
    return 0;
}