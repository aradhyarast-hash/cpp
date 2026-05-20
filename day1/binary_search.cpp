#include <iostream>
using namespace std;

// function declaration and definition
int binSearch(int array[], int start, int end, int target){
    int mid = start + (end-start)/2;
    if(start == end && array[end] != target)  return -1;
    if(array[mid] == target) return mid;
    if(array[mid] > target){
        return binSearch(array, start, mid-1, target);
        end = mid-1;
    }
    else{
        return binSearch(array, mid+1, end, target);
        start = mid+1;
    } 
}

int main(){
    int array[5] = {2, 6, 8, 45, 49};
    int key = 4;
    // function calling

    cout << binSearch(array, 0, 4, key);
    return 0;

}