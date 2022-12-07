#include<bits/stdc++.h>

using namespace std;
int count = 0;

bool isPowerOfTwo(int n){

  if (n== 0)
    return false;

  return (ceil(log2(n)) == floor(log2(n)));
}



void rec(int n){
  
  //cout<<n<<" ";

  if(n == 1){

    return ;
  }
  
  if (n %2 != 0){

    n = 3 * n + 1;
    count++;
    rec(n);
  }
  else{
    
    n /= 2;
    count++;
    rec(n);
    }
 
}

int main() {
  /*
  long long x;
  cin>>x;

  isPowerOfTwo(x) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  */

  rec(6);
  cout<<count;
  
	return 0;
}