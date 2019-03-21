#include <vector>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{

	// https://stackoverflow.com/questions/18446946/printing-vector-in-reverse-order
	
	static string wonka = "Invention, my dear friends, is 93 % perspiration, 6 % electricity, 4 % evaporation, and 2 % butterscotch ripple";
	cout << wonka;
	vector<char> wonkaVec;
	copy(wonka.begin(), wonka.end(), back_inserter(wonkaVec));
	reverse(wonkaVec.begin(), wonkaVec.end());
	copy(wonkaVec.begin(), wonkaVec.end(), ostream_iterator<char>(cout));
	cout << "\n";
	system("pause");

}