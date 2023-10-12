#include <iostream>
#include <string>

using namespace std;

int main() {
    // a) Read three words from the user.
    string word1, word2, word3;
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;
    cout << "Enter the third word: ";
    cin >> word3;

    // b) Concatenate the words with spaces in between and a period at the end.
    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << "Sentence: " << sentence << endl;

    // c) Print the length of each word and the sentence.
    cout << "Length of word1: " << word1.length() << endl;
    cout << "Length of word2: " << word2.length() << endl;
    cout << "Length of word3: " << word3.length() << endl;
    cout << "Length of sentence: " << sentence.length() << endl;

    // d) Create a copy of the sentence.
    string sentence2 = sentence;

    // e) Replace characters 10-12 in sentence2 with 'x' (with position validation).
    if(sentence2.length() > 12) {
        sentence2.replace(10, 3, "xxx");
    }
    cout << "Original sentence: " << sentence << endl;
    cout << "Modified sentence: " << sentence2 << endl;

    // f) Store the first five characters of sentence in sentence_start.
    string sentence_start;
    if(sentence.length() >= 5) {
        sentence_start = sentence.substr(0, 5);
    }
    cout << "Sentence: " << sentence << endl;
    cout << "Sentence start: " << sentence_start << endl;

    // g) Check if sentence contains the word "hallo".
    if(sentence.find("hallo") != string::npos) {
        cout << "The sentence contains 'hallo'." << endl;
    } else {
        cout << "The sentence does not contain 'hallo'." << endl;
    }

    // h) Find all occurrences of the string "er" in sentence.
    size_t pos = 0;
    while((pos = sentence.find("er", pos)) != string::npos) {
        cout << "'er' found at position: " << pos << endl;
        pos += 2;  // Move past the current found substring
    }

    return 0;
}