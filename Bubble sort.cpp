#include <iostream>

using namespace std;
void bubbleSort(int arr[], int size){
    int i,j;
    //loop over the array
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
