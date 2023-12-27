#include <iostream> 
#include <conio.h>

using namespace std;

class number {
    int a; 
    public: 
    number() {
        a = 10;
    } 
    number(int n) {
        a = n; 
    }
    void display();
    number(number &o) {
        cout << "Copy constructor called" << endl; 
        a = o.a; 
    } 
};
void number::display() {
    cout << "The number is: " << a << endl;  
}

int main() {
    number b, x(3), z(b); 
    b.display(); 
    x.display(); 
    z.display(); 
    return 0; 
}