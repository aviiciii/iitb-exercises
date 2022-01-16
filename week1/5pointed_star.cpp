#include<simplecpp>

//Five Pointed Star
main_program{
    turtleSim();
    wait(2);
    repeat(5){
        forward(100); right(180-36); wait(0.5);
    }
    wait(3);
}
