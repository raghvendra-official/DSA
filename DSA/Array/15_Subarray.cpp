#include<iostream>
using namespace std;

void printSubarray(int arr[], int size){
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    printSubarray(arr,n);
}