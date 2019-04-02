#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count;
	string phrase;
	char c = '"';
	string replacement1 = "``";
	string replacement2 = "''";
	count = 0;
	while (getline(cin, phrase)){
		for (int i = 0; i < (int)phrase.length(); ++i) {
			if (phrase[i] == c) {
			    count++;
				if(count % 2 == 0){
					phrase.replace(i, 1, replacement2);
				}
				else {
					phrase.replace(i, 1, replacement1);
				}
			}
		}
		cout << phrase << endl;
	}
	return 0;
}