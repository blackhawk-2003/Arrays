#include<iostream>

using namespace std;
int binarySearch(int arr[],int k,int n)
{
    int low=0,high=n-1,mid;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int k=7;
    int n=8;
    int index= binarySearch(arr,k,n);
    if(index==-1){
        cout<<"Element not found in the array"<<endl;
    }
    else{
        cout<<"element was found on the index number "<<index<<endl;
    }
}