//finding unique elements in an array

#include<iostream>
using namespace std;

//using XOR property where a^a = 0 and a^0 = a
int findUnique(int arr[], int size) {
    int ans = 0;
    for(int i=0; i<size; i++) {
        ans = ans^ arr[i];
    }

    return ans;
}


int main() {

    int arr[5] = {2,4,2,4,1};

    int element = findUnique(arr, 5);
    cout<<"The unique element in an array is : "<<element;

    return 0;
}