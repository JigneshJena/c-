#include<iostream>
using namespace std;
class jignesh{
    int val1,val2;
    public:
    void get(){
        cout<<"Enter two value:"<<endl;
        cin>>val1>>val2;
    }
    friend float mean(jignesh ob);
};
float mean(jignesh ob){
    return float(ob.val1+ob.val2)/2;
}
int main(){
    base obj;
    obj.get();
    cout<<"The mean of your two values is:"<<mean(obj);
}