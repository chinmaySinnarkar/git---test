#include<iostream>
using namespace std;
void reverse(string &str, int i,int j){
    cout<<str<<endl;
    if(i>j){
        return ;
    }

    swap(str[i++],str[j--]);
    reverse(str,i,j);
    
}
int main(){
    
    string str="Gelakhaoon";
    reverse(str,0,str.length()-1);
    cout<<"reversed string is :"<<str;

    return 0;
}


// string reverseWord(string str){

//   int s=0;
//   int e=str.length()-1;
//   while(s<e){
//       swap(str[s++],str[e--]);
      
//   }
//   return str;
  
// }