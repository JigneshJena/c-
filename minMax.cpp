#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int arr[]={3,4,1,4,7,-9};
    int min=0,max=0;
    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]) ; i++)
    {
       for (int j = i+1; j <sizeof(arr)/sizeof(arr[0]) ; j++)
       {
            if(arr[i]>arr[j]){
                    min=arr[j];
            }
            if (arr[i]<arr[j])
            {
                /* code */
                max=arr[j];
            }
            
       }
       
    }
    cout<<"the min values is:"<<min<<endl;
    cout<<"The Max values is : "<<max;
}