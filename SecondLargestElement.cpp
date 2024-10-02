#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, maxi = 0;
    cin>>n; //size of array
    vector<int> arr(n);  //defining an array
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int maxel = *max_element(arr.begin(),arr.end());   //finding the maximum element in  the array

   //finding the second largest element in the array
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi && arr[i] != maxel) {
            maxi = arr[i];
        }
    }
    
    cout<<maxi<<endl;
}
