#include <iostream>
using namespace std;

void print(){
    string a;
    string b;
    cout << "Enter last name" << endl;
    cin >> a;
    cout << "Enter first name" << endl;
    cin >> b;
    cout << "The name's " << a << ", " << b << " " << a <<endl;
}

int main() {
    print();
    return 0;
}
