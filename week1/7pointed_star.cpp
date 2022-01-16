#include<simplecpp>

main_program{
//Write your code here
    turtleSim();
    cout << "Which type (1 or 2)?";
    int choice; cin >> choice;
    wait(1);
    if (choice == 1) {
        repeat (7) {
            forward(100); right(180-77.143); wait(0.4);
        }
    }
    else {
        repeat (7) {
            forward(100); right(180-25.714); wait(0.4);
        }
    }
wait(4);
}
