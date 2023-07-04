#include <iostream>
using namespace std;
int firstOccurrence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid =  start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){ans=mid;end=mid-1;}
        else if(arr[mid]>key) end = mid-1;
        else start=mid+1;
        mid =  start+(end-start)/2;
    }
    return ans;
}
int lastOccurrence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid =  start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){ans=mid;start=mid+1;}
        else if(arr[mid]>=key) end = mid-1;
        else start=mid+1;
        mid =  start+(end-start)/2;
    }
    return ans;
}

int main() {
    int arr[5]={0,1,3};
    int first = firstOccurrence(arr,5,2);
    int last=lastOccurrence(arr,5,2);
    cout<<"first index: "<<first<<" last index: "<<last;
}