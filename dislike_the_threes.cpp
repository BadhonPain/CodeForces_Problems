#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    for (int i = 0; i < test; i++) {
        int k;
        cin >> k;
        
        int count = 0;
        int current_number = 1;
        
        while (true) {
            
            if (current_number % 3 != 0 && current_number % 10 != 3) {
                count++;
                if (count == k) {
                    cout << current_number << endl;
                    break;
                }
            }
            current_number++;
        }
    }
    
    return 0;
}