#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++) {
        if(key == arr[i]) {
            return 1;
        }
    }

    return 0;
}


int main() {


    //intialising the array 
    int number[5] = {4, 6, 7, 2, 10};

    int key;
    cout<<"Enter the number you want to search in array: ";
    cin>>key;
    
    //calling the function 
    bool value = LinearSearch(number, 5, key);

    if(value== 1) {
        cout<<"The element is present in the array "<<endl;
    }
    else{
        cout<<"The element is not present in the array "<<endl;
    }


    return 0;
}