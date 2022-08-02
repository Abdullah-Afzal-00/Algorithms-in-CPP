#include <iostream>
using namespace std;

void Swap(int& a , int& b){
    int temp = a;
    a = b;
    b = temp; 
}

void SelectionSort(int* arr , int size){
    int i , j , k;
    for(i = 0 ; i< size-1;i++ ){
        k = i;
        j = i;
        while(k<size){
            if(arr[k] < arr[j]) j = k;
            k++;
        }
        Swap(arr[i] , arr[j]);
    }
}

int main(){
    int a[] = {9,4,5,11,4,166,34,6622,67,21};
    SelectionSort(a , 10);
    for(auto i : a)
        cout<<i<<" ";
    return 0;
}