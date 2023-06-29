#include<iostream>
using namespace std;


int minimum(int arr[], int size) {
    int min_value = INT8_MAX;

    for(int i=0; i<size; i++) {
        // min_value = min(min_value, arr[i]);  built in function min
        if(min_value > arr[i]) {
            min_value = arr[i];
        }

    }

    return min_value;

}


int maximum(int arr[], int size) {
    int max_value = INT8_MIN;
    for(int i=0; i<size; i++) {
        // max_value = max(max_value, arr[i]);      built in function max
        if(max_value < arr[i]) {
            max_value = arr[i];
        }

    }

    return max_value;

}


int main() {


    //intialising the array 
    int number[5] = {3,6,9,2,7};


    //calling the maximum fuction for finding the maximum
    int maxi = maximum(number, 5);
    cout<<"The maximum value in the array is "<<maxi<<endl;

    //calling the minimum function to find minimum
    int mini = minimum(number, 5);
    cout<<"The minimum value in the array is "<<mini<<endl;



    return 0;
}