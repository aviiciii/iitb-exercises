#include<simplecpp>

main_program {
    turtleSim();
    wait(2);
    //complete array
    repeat(4) {
        // one row
        repeat(4) {
            //one tile
            repeat(4){
                //one line
                forward(30); right(90); wait(0.2);
            }
            // go to next tile
            penUp(); forward (40); penDown();
        }
        // go to next row
        penUp(); forward(-160); right(90); forward (40); left(90); penDown();
    }    
    wait(5);
}
