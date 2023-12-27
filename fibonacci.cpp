#include <iostream> 
#include <conio.h>
using namespace std;
class fibonacci {
    private:
        long int f0, fib, f1; 
    public:
        fibonacci();
        void process(); 
        void display();  
};
fibonacci :: fibonacci() {
    f0 = 0; 
    f1 = 1; 
}
void fibonacci :: process() {
    fib = f0+f1; 
    f0 = f1; 
    f1 = fib; 
}
void fibonacci::display() {
    cout << fib << endl; 
}
int main() {
    int n, i; 
    fibonacci f; 
    cout << "Enter the length of series: " << endl;
    cin >> n;  
    for ( i = 0; i <= n; i++)
    {
        f.process(); 
        f.display(); 
    }
    return 0; 
}