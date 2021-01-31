/*

Input: x = 123
Output: 321
//pop operation:
pop = x % 10;
x /= 10;

//push operation:
temp = rev * 10 + pop;
rev = temp;

*/


int reverse(int x) {
    if (x == INT_MIN) return 0;
    int res = 0, flag = 1;
    if (x < 0) {
        x *= -1;
        flag = -1;
    }
    while (x > 0) {
        if (res > INT_MAX/10 || (res == INT_MAX/10) && (x % 10 > INT_MAX%10)) return 0;
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res * flag;
}
