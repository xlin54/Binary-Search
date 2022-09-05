#include<iostream>
using namespace std;

int search_matching_value(int s[], int find_num, int arraysize){
    //int left = s[0];
    //int right = s[arraysize-1];
    int left = 0, right = 7;
    int mid;

    while(left <= right){
        mid = left + ((right - left)/2);
        if(s[mid] == find_num){
            cout<<"is "<< s[mid] << " equal to "<< find_num<<" ? if yes, then match found at index:  ";
            //return s[mid];
            return mid;
        }else if(s[mid] > find_num){
            right = mid - 1;
        }else if(s[mid]< find_num){
            left = mid + 1;
        }else{
            cout<<"what other edgy cases would cause this to print "<<endl;
        }
    }
    return -1;
}

int main(){
    int arr[8] = {22, 33, 44, 55, 66, 77, 88, 99};
    int arraysize = sizeof(arr)/sizeof(int);
    //cout<<arraysize;
    //cout<<arr[arraysize-1]<<endl;
    //cout<<arr[0];
    int find_num = 44;
    //search_matching_value(arr, find_num, arraysize);
    cout<<search_matching_value(arr, find_num, arraysize)<<endl;

    return 0;
}