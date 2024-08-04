#include<iostream>
#include<vector>
using namespace std;
    // 0 0 0 0 0 1 1 1 1 1 1.
    int firstoccurence(vector<int> &v,int n,int target){
    int count=0;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==target){
            count=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return lo;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<n-firstoccurence(v,n,1);
}