#include <iostream>
using namespace std;

int sum(int k){
  if(k > 0){
    return k+sum(k-1);
  }else{
    return 0;
  }
}

int factorial(int n){
  if(n > 1){
    return n * factorial(n-1);
  }else{
    return 1;
  }
}

int main(){

  int result = sum(10);
  cout << result;

  int n;
  cout << "\nEnter a number to find the factorial : ";
  cin >> n;
  cout << "\nFactorial of " << n << " is : "<< factorial(n);


  return 0;
}
