#include <iostream>
using namespace std;
// function declaration and definition
bool issorted(int arr[], int size){
    // base case.
    if(size == 0 || size==1) return true;
    if(arr[0] > arr[1]){
        return false;
    }
    return issorted(arr+1 , size-1);
}
int main(){
    int arr[5] = {2,5,7,1,67};
    // function calling
    cout << issorted(arr, 5);
    return 0;
}