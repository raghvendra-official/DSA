#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[7]={20,4,15,2,6,8,11};
    int min=INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<"The minimum number in the array is: "<<min;
}