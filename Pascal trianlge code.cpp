#include <iostream>
 
using namespace std;
 
const int N = 12;
 
long getNum(int n, int r) {
    int i;
    long p = 1
    for(i = 1; i <= r; i++) {
        p = p * (n - i + 1) / i;
    }
    return p;
}
 
void print() {
    int n, r, t, i;
    for(n = 0; n <= N; n++) {
        for(r = 0; r <= n; r++) {
            if(r == 0) {
                for(i = 0; i <= N - n; i++) {
                    cout << " ";
                }
            } else {
                cout << " ";
            }
            cout.width(3); // three characters width
            cout << getNum(n, r);
            cout.width(1);
        }
        cout << endl;
    }
}
 
int main() {
    cout << "Pascal Triangle<< endl << endl;
    print();
    return 0;
}
