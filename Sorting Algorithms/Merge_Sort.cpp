#include <iostream>
using namespace std;

void merge(int*a ,int low , int mid , int high){
    int i , j , k = low;
    int const subArrayOneLength = mid - low + 1 ;
    int const subArrayTwoLength = high  - mid;


    int* leftArray = new int [subArrayOneLength];
    int* rightArray = new int [subArrayTwoLength];

    for(i = 0 ; i < subArrayOneLength ; i++)
        leftArray[i] = a[low + i];
    for(j = 0 ; j <subArrayTwoLength ; j++)
        rightArray[j] = a[mid + 1 + j]; 
    
    i = 0; 
    j = 0;
    while(i<subArrayOneLength and j<subArrayTwoLength){
        if(leftArray[i] <= rightArray[j])
            a[k++] = leftArray[i++];
        else a[k++] = rightArray[j++];
    }
    
    for (;i < subArrayOneLength;i++)
         a[k++] = leftArray[i];
    for(;j<subArrayTwoLength ; j++)
        a[k++] = rightArray[j];
    
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int* a , int l , int h){
    if(l>=h) return ;
    int mid = (l + h) /2;
    mergeSort(a , l , mid);
    mergeSort(a,mid+1,h);
    merge(a , l , mid , h);
}

void printArray(int*a ,int size){
    int i ;
    for( i = 0 ; i< size ; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int a[10] = {2,1,4,7,8,1,3,5,11,34};
    mergeSort(a , 0 ,9);
    printArray(a , 10);

    return 0;
}
