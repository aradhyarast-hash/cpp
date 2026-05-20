#include <iostream>
using namespace std;
// function declaration and definition 
// this function just check if the given target element is present in the following array or not
int linSearch(int arr[], int size, int target){
    if(size == 0) return 0;
    if(arr[0] == target) return 1;
    return linSearch(arr+1 , size-1, target); 
}
// this function return the index at which the particular element is present
int indexSearch(int arr[], int size, int begin, int end, int target){
    if(size == 0 || begin > end) return -1;
    if(arr[begin] == target && begin <= end) return begin;
    return indexSearch(arr, size, begin+1, end, target);
}
int main(){
    int array[5] = {34, 6, 8, 2, 6};
    int key = 2;
    // function calling
    cout << linSearch(array, 5, key)<< endl;
    // function calling
    cout << indexSearch(array, 5, 0, 4, key) << endl;
    return 0;
}