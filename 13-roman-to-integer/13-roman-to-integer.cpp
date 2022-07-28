class Solution {
public:
bool isSubDigit(string &s, int &i)
{
	if (i == s.length() - 1) return false;
	
	char c = s[i];
	char d = s[i + 1];
	if (   (c == 'I' && (d == 'V' || d == 'X'))
		|| (c == 'X' && (d == 'L' || d == 'C'))
		|| (c == 'C' && (d == 'D' || d == 'M')) )
		return true;

	return false;

}


int romanToInt(string s) {
	int result = 0;

	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		switch(c)
		{
		case 'I':
			if (isSubDigit(s, i)) result--;
			else result++;
			break;

		case 'V':
			result += 5;
			break;

		case 'X':
			if (isSubDigit(s, i)) result-=10;
			else result+=10;
			break;

		case 'L':
			result += 50;
			break;

		case 'C':
			if (isSubDigit(s, i)) result-=100;
			else result+=100;
			break;

		case 'D':
			result += 500;
			break;

		case 'M':
			result += 1000;
			break;
		}
	}
	
	return result;
}
};