//divide n chocolates among m people

#include <iostream>
using namespace std;

int main() {

    int chocolates;
    int children;

    cin >> chocolates >> children;

    int choco_each = (chocolates / children);
    cout << choco_each << endl;

    int choco_remain = (chocolates % children);
    cout << choco_remain;

    return 0;
}