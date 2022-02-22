#include <simplecpp>

main_program {
    // input
    float income, tax; 
    cout << "Income : "; cin >> income;
    
    // compute tax
    if (income<0) {
        cout << "Invalid income"<< endl;
    }
    else if (income<=180000) {
        cout << "No tax" << endl;
    }
    else if (180000 < income and income <= 500000) {
        tax = 0.10 * (income-180000);
    }
    else if (500000 < income and income <= 800000) {
        tax = 32000 + 0.20 * (income-500000);
    }
    else {
        tax = 92000 + 0.30 * (income-800000);
    }
    // print tax
    if (180000 < income){
        cout << tax << endl;
    }

}