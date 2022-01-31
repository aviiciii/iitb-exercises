#include <simplecpp>
#include <cmath>

main_program {
    // input for size of wave
    double size;
    cout << "Size of wave(1-5):";
    cin >> size;
    size*=10;

    // input for length of wave
    double length;
    cout << "Length of wave(1-5):";
    cin >> length;
    length*=100;

    //initiate canvas and wait for click
    initCanvas("Sine Wave", 750, 750);
    int start = getClick();

    // click points
    double origin_x=start/65536;
    double origin_y=start%65536;

    // initiate line
    Line l(origin_x, origin_y, origin_x, origin_y);
    l.penDown();

    //draw wave
    double x = 0;
    repeat(length){
        x+=0.1;
        double y = sin(x);
        l.moveTo(x*size+origin_x, y*size+origin_y);
    }
    wait(10);
}
