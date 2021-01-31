/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
Given a roman numeral, convert it to an integer.

*/

#define MAX_SIZE ('X' + 1)
#define ROMAN_CHAR_TABLE(X) \
	X('I', 1)               \
	X('V', 5)               \
	X('X', 10)              \
	X('L', 50)              \
	X('C', 100)             \
	X('D', 500)             \
	X('M', 1000)

#define ROMAN_ELEMENT_INIT(_char, _value) [_char] = _value,

const int ROMAN_MAP[] = {ROMAN_CHAR_TABLE(ROMAN_ELEMENT_INIT)};

int romanToInt(char* s) {
	char* nc = NULL;
	int roman_value = 0;
	const char LAST_CHAR = s[strlen(s) - 1];
	while (*(nc = s + 1) != '\0') {
		if (ROMAN_MAP[*nc] > ROMAN_MAP[*s]) {
			roman_value += ROMAN_MAP[*nc] - ROMAN_MAP[*s];
			if (*nc != LAST_CHAR)
				nc++;
			else
				return roman_value;
		} else
			roman_value += ROMAN_MAP[*s];
		s = nc;
	}

	return roman_value + ROMAN_MAP[*s];
}
