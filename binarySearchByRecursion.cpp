#include<iostream>
using namespace std;
void print(int a[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int binarySearch(int a[],int s,int e,int key){
    // print(a,s,e);
    int mid=s+(e-s)/2;
    
    if(s>e){
        return -1;
    }
    if(a[mid]==key){
        return mid;
    }
    if(a[mid]<key){
        return binarySearch(a,mid+1,e,key);
    }
    else{
        return binarySearch(a,s,mid-1,key);
    }
    

}
int main(){
    int a[6]={2,4,6,10,14,18};
    int size=6;
    int key=10;
    int ans=binarySearch(a,0,5,key);
    cout<<ans;

    return 0;
}