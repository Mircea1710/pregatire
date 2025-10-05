#include <iostream>
using namespace std;

bool is_prime(int n){
  if(n<2) return false;
  for(int d=2; d*d<=n; d++){
    if(n%d==0) return false;
  }
  return true;
}

bool moderat(int n ){
  for(int d=2; d*d<=n; d++){
    if(is_prime(d) * is_prime(d++) == n)
      return true;
    if(is_prime(d) * is_prime(d++) > n)
      break;
  }
  return false;
}
