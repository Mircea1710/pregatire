#include <iostream>
using namespace std;

int floare_minima(int r[], int n){
    int min = r[0];
    for(int j = 1; j < n; j++){
        if(r[j] < min)
            min = r[j];
    }
    return min;
}

int main(){
  int m;
  int n;
  cin>>m>>n;
  int a[10][10];
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
  }
  for(int i=0;i<m;i+=2){
    for(int j=0;j<n;j++){
        if(a[i][j] > floare_minima(a[i+1], n)-1){
          a[i][j]=floare_minima(a[i+1], n)-1;
        }
      }
  }
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cout<<a[i][j]<<" ";
      }
      cout<<endl;
  }
}
