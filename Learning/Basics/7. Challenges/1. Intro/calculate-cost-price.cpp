//calculating cost price given selling price and profit percentage.

#include <iostream>
using namespace std;

int main() {
  
    double selling_price, profit_percent;

    cin >> selling_price >> profit_percent;

    double cost_price = (selling_price * 100.0) / (100 + profit_percent);

    cout << cost_price;
    
    return 0;
}