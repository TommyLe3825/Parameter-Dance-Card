#include <iostream>
using namespace std;

//change the function
template <class T, class L> //added another class L to take other data type
T myMax(T a, L b) {
    return (a > b ? a : b); if true, return a and if not, return b
}

int main () {
    double x;
    int y;
    cin>>x>>y;
    cout << myMax(x, y) << endl;
}
