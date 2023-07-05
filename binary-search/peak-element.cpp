#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int findPeakElement(int nums[],int size) {
        int start=0;
        int end=size-1;
        while(start<end){
        int mid = start+(end-start)/2;
            if(nums[mid]<nums[mid+1]){
                start=mid+1;
            }else end = mid;
        }
        return nums[start];
    }

int main() {
    int nums[4]={1,2,3,1};
    int peakElement = findPeakElement(nums,4);
     cout<<"Peak element is : "<<peakElement;
    return 0;
}