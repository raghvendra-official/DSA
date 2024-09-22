#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[5] = {5,4,3,9,2};
    int temp = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>temp)
        {
            temp = arr[i];
        }
        
    }
    cout<<"The largest number in the array is:"<<temp;
    
}