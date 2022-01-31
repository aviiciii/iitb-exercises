#include <simplecpp>

main_program{
    double inches, yards, feet;
    cout << "Inches:";
    cin >> inches;
    feet = inches * (1.0/12);
    yards = feet * (1.0/3);
    cout << "Yards: " << yards << endl << "Feet: " << feet << endl << "Inches: " << inches << endl;
}