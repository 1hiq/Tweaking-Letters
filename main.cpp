#include <iostream>
using namespace std;



string tweakLetters(string word, int arr[], int arrLen) {
	if (word.length() != arrLen) {
		return "Error, the length of the string should be equaled to the length of the array.\n";
	}

	for (int i = 0; i < arrLen; i++) {
		if (arr[i] == 0) {
			continue; // Which means skip this iterate :)
		}
		else if (arr[i] == -1) {
			word[i] = int(word[i]) - 1;
		}
		else if (arr[i] == 1) {
			word[i] = int(word[i]) + 1;
		}
		else {
			return "Error, you should make the array contains only (-1, 0, 1).\n";
		}
	}

	return word;
}



int main(void) {

	// What? You want from me write an explanation to every problem? No, understand it yourself :)
	int arr[] = { 0, 1, -1, 0, -1 };
	int arrLen = sizeof(arr) / sizeof(arr[0]);

	cout << tweakLetters("apple", arr, arrLen) << endl;
	

	
	
	return 0;
}
