/*Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".

Subscribe to see which companies asked this question
*/


class Solution {
public:
	string reverseString(string s) {
		int i = 0, j = 0;
		char tmp;
		for (i = 0, j = s.length() - 1; i<j; i++, j--)
		{

			tmp = s[i];
			s[i] = s[j];
			s[j] = tmp;
		}
		return s;

	}
};