#include <simplecpp>
//Write a program that reads in numbers m, n and prints the letter X (capital X) m times followed by the letter Y (capital Y) n times, all in one line.
main_program{
	cout << "";
	int m; cin >> m;
	cout << "";
    int n; cin >> n;
	int i=0;
  	while (i<m) {
  		cout << "X";
  		i++;
    }
  	int j=0;
    while (j<n) {
      	cout << "Y";
      	j++;
    }
}