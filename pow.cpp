#include<iostream> 


using namespace std; 

class Solution{
    public: 
    double myPow(double x, int n){
      long long N = n; 
      if(N<0){
        N = -N; 
        x =1/x; 
      }
      double res= 1.0; 
      while(N>0){
        if(N%2==1){
          res *=x; 
        }
        x *=x; 
        N /=2; 
      }
      return res; 
    }
};
int main(){
  int n=10; 
  double x = 2.0; 
  Solution sol; 
  cout << sol.myPow(x,n) <<endl; 
  return 0; 
}
