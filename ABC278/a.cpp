#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n, k;
  cin>>n>>k;
  vector<int> p(n);
  for(int i=0;i<n;i++){
    cin>>p[i];
  	}
  
  for(int i=0;i<n;i++){
    p[i]=p[i+k];
    if(i>=n-k){p[i]=0;}
    cout<<p[i]<<" ";
  }
  
  return 0;
}
    