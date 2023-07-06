#include <bits/stdc++.h>
using namespace std;
int findPivot(int arr[], int l, int h, int key)
{
	if (l > h)
		return -1;

while(l<h){
	int mid = (l + h) / 2;
    if(arr[0]> arr[mid]){
        h=mid;
    }
	else l=mid+1;

}
return l;
	
}

int main()
{
	int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 3;
	int i = findPivot(arr, 0, n - 1, key);

	if (i != -1)
		cout << "Index: " << i << endl;
	else
		cout << "Key not found";
}

