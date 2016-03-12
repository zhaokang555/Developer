#include <iostream>

using namespace std;

int foo(int n, int stepNum) {

    if (n == 1)
        return stepNum;
    else
        ++stepNum;

    if (n % 2 == 0)
        return foo(n/2, stepNum);
    else
        return foo((3*n+1)/2, stepNum);
}



int main() {
    int stepNum = 0, n;
    cin >> n;

    int r = foo(n, stepNum);
    cout << r << endl;
    return 0;
}