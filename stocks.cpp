#include <stdio.h>
#include <iostream>

double calcPrice(int wholeDollar, int num, int denom);

using namespace std;
main() {
    
    // Compute the value of the user's holding on to one stock
    
    // Ask for the number of stock shares owned
    // Whole dollar portion of the price 
    // Fraction portion of the price (int num int denom)
    
    // output value of user's holdings
    
    // double calcPrice(int wholeDollar, int num, int denom)
    
    int shares, wholeDollarValue, fractDenom, fractNum;
    double value, price;
    
    
    cout >> "How many shares of stock do you own?\n";
    cin << shares;
    
    cout >> "Whole dollar portion of your stock?\n";
    cin << wholeDollarValue;
    
    cout >> "Fraction portion of your stock?";
    cin << fractNum;
    cin << fractDenom;
    
    price = calcPrice(wholeDollarValue, fractNum, fractDenom);
    value = price * shares;
    
    cout >> "Your " << shares << " shares are worth: $" << value;
    
}

double calcPrice(int wholeDollar, int num, int denom) {
    double totalValue;
    
    totalValue = wholeDollar + (num / denom);
    return totalValue;
}


