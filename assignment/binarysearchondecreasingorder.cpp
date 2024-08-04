#include<iostream>
#include<vector>
using namespace std;
//10 9 7 5 3 2 1
int main(){
    int arr[]={10,9,8,7,4,3,2,1};
    int n=8;
    int lo=0;
    int hi=n-1;
    int idx;
    int tgt=5;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==tgt){
            idx=mid;
            flag=true;
            break;
        }
        else if(arr[mid]<tgt){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    if(flag==false) cout<<-1;
    else cout<<idx;
}