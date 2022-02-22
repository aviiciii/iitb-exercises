#include <simplecpp>

main_program {
    
    // input
    int i;
    cout << "Number : "; cin >> i;

    // compute remainder
    float m5, m3;
    m5 = i%5;
    m3 = i%3;

    // check multiple of 5
    if (m5==0){
        // check multiple of 3
        if (m3!=0) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
    else {
        cout << "0" << endl;
    }
}