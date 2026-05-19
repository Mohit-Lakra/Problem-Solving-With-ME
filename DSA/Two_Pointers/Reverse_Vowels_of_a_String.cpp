// LC 345. Reverse Vowels of a String
class Solution {
public:
  string reverseVowels(string s) {
    int i = 0; int j = s.size() - 1;
    set <char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    while (i < j) {
      if (vowels.count(s[i]) && vowels.count(s[j])) {
        swap(s[i], s[j]);
        i++; j--;
      }
      else if (vowels.count(s[i])){
        j--;
      }
      else if (vowels.count(s[j])) {
        i++;
      }
      else {
        i++; j--;
      }
    }
    return s;
  }
};

// Here we are using 2 pointers to track position of the string.
// We will keep moving the left pointer until we find a vowel
// and we will keep moving the right pointer until we find a vowel.
// Once we find both the vowels, we will swap them and
// move both the pointers. We will repeat this process until
// the left pointer is less than the right pointer.
