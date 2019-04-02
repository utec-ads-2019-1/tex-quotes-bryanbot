#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count;
	string parrafo;
	getline(cin, parrafo);
	char c = '"';
	string reemplazo = "``";
	string reemplazo2 = "''";
	count = 0;
	for (int i = 0; i < (int)parrafo.length(); ++i) {
		if (parrafo[i] == c) {
			    count++;
				if(count % 2 == 0){
				parrafo.replace(i, 1, reemplazo2);
				}
				else {
				parrafo.replace(i, 1, reemplazo);
				}
		}
	}
	cout << parrafo << endl;
    return 0;
}