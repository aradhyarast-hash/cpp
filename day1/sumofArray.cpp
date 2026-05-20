#include <iostream>
using namespace std;
// function definition and declaration 
int sumofArray(int arr[], int size){
    // base case conditions
    if(size == 0) return 0;
    if(size == 1) return arr[0];
    return arr[0] + sumofArray(arr+1, size-1);
}
int main(){
    int array[4] = {2,7,3004,71};
    // function calling
    cout << sumofArray(array , 4);
    return 0;
}