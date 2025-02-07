#include<iostream>
#include<algorithm>
using namespace std;
int findPlatform(int arr[],int dept[],int n){
    sort(arr, arr + n);
    sort(dept, dept + n);
    int i=1,j=0,plat_needed=1,result=1;
    while(i<n && j<n){
        if(arr[i]<=dept[j]){
            plat_needed++;
            i++;
        }
        
        else if(arr[i]>dept[j]){
            plat_needed--;
            j++;
        }
        if(plat_needed>result){
            result=plat_needed;
        }
    }
    return result;
}
int main(){
    int arr[] = { 100, 300, 500 };
    int dep[] = { 900, 400, 600 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findPlatform(arr, dep, n);
    return 0;
}
