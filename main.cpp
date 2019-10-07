//  main.cpp
//  Exact Change
//
//  Created by Jake Carrico on 8/27/15.
//  Copyright (c) 2015 Jake Carrico. All rights reserved.

#include <iostream>

using namespace std;

void displaydenom(double change);
void checkbchange(double denom, double &change);
void checkcchange(double denom, double &change);

int main(){
    
    double bill;
    double paid;
    double change;
    
    while(true){
    cout << "How much is the bill? ";
    cin >> bill;
    
    cout << "How much was paid? ";
    cin >> paid;
    
    change = paid-bill;
    
    cout << "Your change is $" << change;
    
    displaydenom(change*100);
    cout << '\n';
    }
    cin.ignore(1);
    
    return 0;
}

void displaydenom(double change){
    
    checkbchange(10000, change);
    checkbchange(5000, change);
    checkbchange(2000, change);
    checkbchange(1000, change);
    checkbchange(500, change);
    checkbchange(100, change);
    checkcchange(25, change);
    checkcchange(10, change);
    checkcchange(5, change);
    checkcchange(1, change);
    
}

void checkbchange(double denom, double &change){
    int num = 0;
    while(change >= denom){
        num++;
        change = change-denom;
    }
    if(num>0){cout << '\n' << num << " $" << denom/100 << " bills";}
}

void checkcchange(double denom, double &change){
    int num = 0;
    while(change >= denom){
        num++;
        change = change - denom;
    }
    if(num>0){
        if(denom == 25){
            cout << '\n' << num << " quarters";
        }
        if(denom == 10){
            cout << '\n' << num << " dimes";
        }
        if(denom == 05){
            cout << '\n' << num << " nickels";
        }
        if(denom == 01){
            cout << '\n' << num << " pennies";
        }
    }
}
