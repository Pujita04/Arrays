//finding the reverse of the array

#include<iostream>
using namespace std;

void printing_arr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void reverse_arr(int arr[], int size) {
   int start = 0;
   int end = size -1;

   while(start<= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
   }
}

int main() {

    int arr1[5] = {4, 6, 7, 2, 5};    //odd array
    int arr2[6] = {1, 2, 4, 6, 7, 9};  //even array

    reverse_arr(arr1, 5);
    reverse_arr(arr2, 6);

    printing_arr(arr1, 5);
    printing_arr(arr2, 6);

    return 0;
}