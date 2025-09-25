#include <iostream>
#include <functional>
using namespace std;

void myFunc(function<void()> func){ 
  func();
  func();
}


int main(){

  auto message = [](){
    cout << "\nHello lambda\n";
  };
  message();

  auto add = [](int a, int b){
    return a+b;
  };
  cout << add(10, 30) ;

  myFunc(message); // passing a lambda function as arg



  for(int i = 1; i <= 3; i++){
    auto show = [i](){ // capture clause - []  : to give a lambda access to variables outside of it
      cout << "\nNumber : " << i;
    };

    show();
  }


  return 0;
}
