#include <iostream>
using namespace std;

int findInsertPositon(int*a , int key , int l , int h){
    int mid;
    while(l<=h){
        mid = (l+h)/2;
        if(a[mid] > key) h = mid-1;
        else if(a[mid] < key ) l = mid+1;
        else return mid;
    }
    if(a[mid]<key)return mid+1;
    else return mid;
}

int main(){
    int a[5] = {3 ,5,7,8,9};
    cout<<findInsertPositon(a , 4 , 0 , 4);
    return 0;
}