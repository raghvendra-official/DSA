#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v){
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout<<v[i];
        v.at(i);
    }
    
}

int main(){
    //Initailisation
    vector<int>v; //default with no data, 0 size
    vector<int>arr2(5,-1); //init with n size with specific data 
    vector<int>aa3 = {1,2,3,4,5};


    //how to copy vector
    
    //insert
    v.push_back(1); 
    v.push_back(2);
    v.push_back(3);

    print(v);

    //pop-->Delete-->END
    v.pop_back();
    print(v);

    //insert
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);

    //Adding Extra items
    for (int i = 0; i < 10; i++)
    {
        v.push_back(80);
    }


    //I want to clear the vector
    v.clear();
    print(v);
    
}