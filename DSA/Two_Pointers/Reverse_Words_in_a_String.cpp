// LC 151. Reverse Words in a String

class Solution {
public:
  string reverseWords(string s) {
    int i = 0, j = s.size() - 1;
    while (s[i] == ' ') i++;
    while (s[j] == ' ') j--;
    string result = "";
    string word = "";
    while (i <= j) {
      if (s[i] != ' ') {
        word += s[i];
      }
      else if (word.size() > 0) {
        result = word + " " + result;
        word = "";
      }
      i++;
    }
    if (word.size() > 0) {
      result = word + " " + result;
    }
    if (result.size() > 0) {
      result.pop_back();
    }
    return result;
  }
};

// Here we are using 2 pointers to track the position of the string.
// We will keep moving the left pointer until we find a non-space character
// and we will keep moving the right pointer until we find a non-space character.

// Once we find both the non-space characters, we will keep moving the left pointer until
// we find a space character and we will add each char to the word
// and when we find a space character, we will add the word to the result and reset the word.

// Main twist here is to add the word in the reverse order 
// Result = word + " " + result; instead of Result = result + " " + word;

// We will repeat this process until the left pointer is less than or equal to the right pointer.
// Finally, we will check if there is any word left and add it to the result and remove
// the extra space at the end of the result and return the result.
