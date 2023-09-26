#include <iostream>

using namespace std;

void selectionSort(int arr[],int size){

    int i,j,minIndex;
    //For iterating over the full array
    for(i=0;i<size-1;i++){
        minIndex=i;
        //for iterating over the unsorted list
        for(j=i+1;j<size;j++){
            //Helps in finding the minimum element
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }

        }
        swap(arr[minIndex],arr[i]);
    }
}
int main() {
    cout << "Hello, World!" <<endl;
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array you want to sort"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
