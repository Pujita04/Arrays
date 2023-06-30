//printing intersections of elements of an array
//given that both the array are in non decreasingly sorted

#include<iostream>
using namespace std;

void intersection_arr(int arr1[], int arr2[], int n, int m) {

    int i = 0;
    int j = 0;
    
    //since arrays are sorted we can apply conditions 
    while(i<n && j<m) {
        if(arr1[i] > arr2[j] ) {
            j++;
        }
        else if(arr1[i] < arr2[j]) {
            i++;
        }
        //condition arr[i] == arr[j] 
        else{
            cout<<arr1[i] << endl;
            i++;
            j++;
        }
    }
}

int main() {

    int arr1[5] = {2, 4, 5, 7, 10};
    int arr2[3] = {1, 2, 7};


    intersection_arr(arr1, arr2, 5, 3);


    return 0;
}