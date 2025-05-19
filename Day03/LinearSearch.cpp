#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int size , int target) {
 for(int i=0; i<size ; i++){
    if(arr[i]== target){
        //FOUND
        return i;
    }
 }
      return -1;  //NOT FOUND
}

int main() {
    int arr[]={10,222,44,19,800};
    int size = 5;
    int target = 19;
    
  cout<<  LinearSearch(arr, size , target)<<endl;
}
