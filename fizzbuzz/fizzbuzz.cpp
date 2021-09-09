#include <iostream>
using namespace std;

int main(){
  int i = 0;
  while (i < 100){
    i++;
    if (i % 15 == 0) {
      cout << "Fizzbuzz!" << endl;
    } else if (i % 5 == 0){
      cout << "Buzz!" << endl;
    } else if (i % 3 == 0){
      cout << "Fizz!" << endl;
    } else {
      cout << i << endl;
    }
  }
}
