#include<iostream>
using namespace std;

//printing an array
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Linear Search
void linearSearch(int arr[], int size, int target){
    bool flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
        }    
    }
    if (flag==1)
    {
        cout<<"Target is found";
    }
    else
    {
        cout<<"Target is not found";
    }
    
}

bool Linearsearch(int arr[], int size, int target){
     for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }    
    }
    return false;
}


int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    printArray(arr,size);
    
}