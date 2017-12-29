#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[5] = {0,1,2,3,4};
    
    cout << "Ascending Order : " << endl;
    for (int i=0;i<5;i++) {
        cout << "=> " << arr[i] << endl;
    }

    cout << "Descending Order : " << endl;
    for (int i=4;i>=0;i--) {
        cout << "=> " << arr[i] << endl;
    }
}
