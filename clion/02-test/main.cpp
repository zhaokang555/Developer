#include <iostream>
#include <cmath>

using namespace std;

double getDistence(int x1, int y1, int x0, int y0) {
    double d = sqrt(pow((x1-x0), 2) + pow((y1-y0), 2));
    return d;
}

int main(void) {
//    int a, b;
//    int lineNum = 1;
//    while(cin >> a >> b) {
//    	cout <<"Case " << lineNum++ << ": " << a + b << endl;
//    }
//    return 0;


    int r, x1, y1, x2, y2, x3, y3, x0, y0;
    cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x0 >> y0;

    double d1 = getDistence(x1, y1, x0, y0);
    double d2 = getDistence(x2, y2, x0, y0);
    double d3 = getDistence(x3, y3, x0, y0);

    double arr[] = {d1, d2, d3};

    int cnt = 0;
    for (int i = 0; i < 3; ++i) {
        if (arr[i] <= r)
            ++cnt;
    }


//    cout << d1 << " " << d2 << " " << d3 << " " << cnt;
    cout << cnt << "x";

    return 0;

}