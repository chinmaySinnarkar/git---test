#include<iostream>
using namespace std;
int binarySearch(int a[],int s,int e,int key){
    int mid=s+(e-s)/2;
 
    if(s>e){
        return -1;
    }
    if(a[mid]==key){
        // f=mid;
        binarySearch(a,s,mid-1,key);
        if(a[mid]>key &&key>a[0] ){      //immproper!!
            return mid;
        }
        return mid;
        
    }
    else if(a[mid]<key){
        return binarySearch(a,mid+1,e,key);
    }
    else{
        return binarySearch(a,s,mid-1,key);
    }
  
    
}
int main(){
    int a[6]={2,23,24,434,532,743};
    int size=6;
    int key=23;
    int ans=binarySearch(a,0,5,key);
    cout<<ans;

    return 0;
}