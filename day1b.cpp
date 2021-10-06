#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    /*
        Find element of array such that the sum of all elemnt to left = sum of all element to right
        example : [5,6,8,11] ans = 8 because 5+6 = 11
    */
    int A[] = {5,6,8,11};
    int n = sizeof (A) / sizeof (A[0]);
    int i=0, sumF=0, sumB=0, key = n/2;
    while(i<n){
        for(int j =0; j< key; j++){
            sumF = sumF + A[j];
        }
        for(int j =n-1; j> key; j--){
            sumB = sumB + A[j];
        }
        if (sumF==sumB){
            break;
        }
        else if  (sumF>sumB){
            key--;
        }
        else{
            key++;
        }
        i++;
    }
    if(i<n){
    printf("%d", A[key]);}
    else{
        printf("not possible");
    }
    return 0;
}