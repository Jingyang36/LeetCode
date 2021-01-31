/*
false for negatie

Now let's think about how to revert the last half of the number. For number 1221, if we do 1221 % 10, we get the last digit 1, to get the second to the last digit, we need to remove the last digit from 1221, we could do so by dividing it by 10, 1221 / 10 = 122. Then we can get the last digit again by doing a modulus by 10, 122 % 10 = 2, and if we multiply the last digit by 10 and add the second last digit, 1 * 10 + 2 = 12, it gives us the reverted number we want. Continuing this process would give us the reverted number with more digits.

Now the question is, how do we know that we've reached the half of the number?

Since we divided the number by 10, and multiplied the reversed number by 1
*/

bool isPalindrome(int x){
    int i = x;
    if (x == INT_MIN) return 0;
    int res = 0, flag = 1;
    if (x < 0) {
        return false;
    }
    while (x > 0) {
        if (res > INT_MAX/10 || (res == INT_MAX/10) && (x % 10 > INT_MAX%10)) return 0;
        res = res * 10 + x % 10;
        x /= 10;
    }
    if (res == i)
        return true;
    else
        return false;

}
