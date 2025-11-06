#include <iostream>

using namespace std;

int main() {
    // Initialize a pointer to NULL and demonstrate the consequences of dereferencing it
    int *p = nullptr; 
    
    cout << "Attempting to write to NULL address..." << endl;
    *p = 42; // Dereferencing a NULL pointer causes a Segmentation Fault (SIGSEGV)
    
    return 0;
}