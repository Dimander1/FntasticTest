#include <iostream>
#include <string>

using namespace std;
int main()
{
	while (1) {
		cout << "String:" << endl;
		string startString = "";
		string finalString = "";
		getline(cin, startString);


		for (int i = 0; i < startString.length(); i++) {
			finalString += '(';
			if (isupper(startString[i])) {
				startString[i] = tolower(startString[i]);
			}

		}
		for (int i = 0; i < startString.length() - 1; i++) {
			for (int j = i + 1; j < startString.length(); j++)
			{
				if (startString[i] == startString[j]) {
					finalString[i] = ')';
					finalString[j] = ')';
				}
			}
		}
		cout << finalString << endl;
	}
}

