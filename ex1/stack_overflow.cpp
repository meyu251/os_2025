#include <iostream>

using namespace std;

void endless_recursion(int counter) {
    cout << "Recursing, counter: " << counter << endl;
    endless_recursion(counter + 1); 
}

int main() {
    endless_recursion(0);
    return 0;
}