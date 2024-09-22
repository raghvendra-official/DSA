#include<iostream>
using namespace std;

void reverseArray(int arr[], int arr2[], int size){
    
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={5, 4, 3, 9, 2};
    int arr2[5];
    int n = 5;
    for (int i = 4, j=0; i >= 0, j<5; i--, j++)
    {
          arr2[j]=arr[i];
    }
    printArray(arr2,n);
}