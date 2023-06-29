//swapping alternate element 

#include<iostream>
using namespace std;


//function use to print array
void printing_arr(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

//function use to swap alternate elements of an array
void swap_alternate(int arr[], int size) {
    int start = 0;
    int end = 1;
    while(end<=size-1) {
        swap(arr[start], arr[end]);   //swap built in function is used
        start+=2;
        end+=2;
    }
}

int main() {

    int arr1[5] = {1, 3, 5, 7, 8};   //odd array
    int arr2[6] = {1, 4, 6, 2, 7, 8};  //even array


    swap_alternate(arr1, 5);
    swap_alternate(arr2, 6);

    printing_arr(arr1, 5);
    printing_arr(arr2, 6);


    return 0;
}
