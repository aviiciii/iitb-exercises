#include <simplecpp>
//Write a program that reads in a number m and prints a '*' on m consecutive lines, followed by m+1 '*'s on a single line.  The result should look like the letter L made out of stars.
main_program {
	cout << "";
  	int m; cin >> m;
  	int i=0;
  	while (i<m) {
  		cout << "*";
      	cout << endl;
      	i++;
    }
  	i=0;
  	while (i<=m) {
  		cout << "*";
      	i++;
    }
}