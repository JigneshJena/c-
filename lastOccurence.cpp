#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter x: ";
    cin>>x;

    int occurence=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x)
        {
                occurence++;
        }
    }
    
    cout<<"Your x is greater is :"<<occurence<<endl;

    return 0;
}