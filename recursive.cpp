#include <iostream>
using namespace std;

void hanoi_recursive(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    hanoi_recursive(n - 1, source, auxiliary, target);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    hanoi_recursive(n - 1, auxiliary, target, source);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    hanoi_recursive(n, 'A', 'C', 'B');
    return 0;
}