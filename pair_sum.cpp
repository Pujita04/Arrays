//finding the pair of two elements in an array whose sum is equal to the given sum

#include<iostream>
using namespace std;

void pair_sum(int arr[], int n, int sum) {

    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            if(arr[i] + arr[j] == sum) {
                cout<< arr[i] <<" " << arr[j] <<endl;
            }
        }
    }

}

int main() {

    int arr1[5] = {1, 3, 4, 2, 5};   //given array
    int sum = 5;    //given sum of which pair is to be made 

    pair_sum(arr1, 5, sum);



    return 0;
}