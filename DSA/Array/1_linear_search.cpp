#include<iostream>
using namespace std;
int main(){
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int n;
    cout<<"Enter the number to be find";
    cin>>n;
    bool flag = 0;
    // 0->not found
    // 1->founded
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            //found
            flag = 1;
            break; 
        }
    }
    if (flag ==1)
    {
        cout<<"Target found";
    }
    else
    {
        cout<<"Target not found";
    }
    return 0;
}