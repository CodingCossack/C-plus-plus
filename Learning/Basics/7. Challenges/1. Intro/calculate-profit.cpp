//calculating profit given the cost price and selling price

#include <iostream>
using namespace std;

int main () {

    double cost_price, selling_price;

    cin >> cost_price >> selling_price;

    double profit = selling_price - cost_price;

    double profit_percent = (profit / cost_price) * 100;

    cout << profit << endl;
    cout << profit_percent;

    return 0; 
}