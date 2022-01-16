#include<simplecpp>

main_program{
//Write your code here
    turtleSim();
    repeat (10) {
        forward(10); penUp(); wait(0.2);
        forward(10); penDown(); wait(0.2);
    }
    wait(5);
}
