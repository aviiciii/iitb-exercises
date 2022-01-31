#include <simplecpp>

main_program {
    // no of items
    int items;
    cin >> items;

    int total = 0;
    
    // loop
    repeat(items) {
        int cost, quan;
        cin >> cost;
        cin >> quan;
        total += cost * quan;
    }
    cout << total << endl;
}