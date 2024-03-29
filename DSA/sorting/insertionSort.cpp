#include <iostream>
#include "../printarr.hpp"

using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current {arr[i]};
        int previous {i-1};

        while(previous>=0 and current<arr[previous]){
                arr[previous+1]=arr[previous];
                previous--;
        }
        arr[previous+1]=current;
    }
}

int main(){
    insertionSort(arr,n);
    print();
    return 0;
}