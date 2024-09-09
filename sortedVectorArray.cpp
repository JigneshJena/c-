#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    bool t=true;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>!v[i-1]){
        t=false;
        }
    }

    if(t=true)
    cout<<"sorted";
    else
    cout<<"not sorted";

    return 0;
}