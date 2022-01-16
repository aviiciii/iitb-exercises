#include<simplecpp>
main_program
{
    turtleSim();
    int i = 36;
    repeat (i) {
        forward(20);
        repeat(i) {
            right(270.0/i);
            forward(1); wait(0.005);
        }
        forward(20);
        repeat(i) {
            left(270/i);
            forward(1); wait(0.005);
        }
    }

    wait(10);
}
