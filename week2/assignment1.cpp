#include <simplecpp>

main_program {
    // no of digits
    int digits;
    cin >> digits;

    // initiate carry
    int carry = 0;

    // loop
    repeat(digits) {
        // initiate variables
        int a, b, sum;
        // input of digits
        cin >> a;
        cin >> b;
        // add digits along with carry
        sum = a + b + carry;
        // reset carry
        carry = 0;
        if (sum>9) {
            // set carry
            carry = sum / 10;
            // set sum to single digit
            sum = sum % 10;
        }
        // print sum of of current digit
        cout << sum << endl;
    }
    // print excess carry
    cout << carry << endl;
}