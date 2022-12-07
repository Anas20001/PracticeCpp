#include<bits/stdc++.h>

using namespace std; 


int rec(int arr[], int len){

  if(len == 1)
    return arr[0];

  int sub = rec(arr, len -1);

  sub = sub * (len-1);

  return (sub +  arr[len -1])/len;
  
}

int main() {

  int arr[] = {1, 8, 2, 10, 3};
  cout<<rec(arr,5)<<"\n";

  
  
 
	return 0;
}