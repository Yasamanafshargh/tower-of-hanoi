#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

struct Move {
    int n;
    char source, target, auxiliary;
};

void hanoi_iterative(int n, char source, char target, char auxiliary) {
    stack<Move> st;
    st.push({n, source, target, auxiliary});

    while (!st.empty()) {
        Move m = st.top();
        st.pop();

        if (m.n == 1) {
            cout << "Move disk 1 from " << m.source << " to " << m.target << endl;
        } else {
            
            st.push({m.n - 1, m.auxiliary, m.target, m.source});     // مرحله سوم
            st.push({1, m.source, m.target, m.auxiliary});           // حرکت بزرگترین دیسک
            st.push({m.n - 1, m.source, m.auxiliary, m.target});     // مرحله اول
        }
    }
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    hanoi_iterative(n, 'A', 'C', 'B');
    return 0;
}