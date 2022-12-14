// HW 2-3 이진수 더하기

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";

    int sum = 0, result1 = 0, result2 = 0;
    int e1 = 1, e2 = 1;

    if (bin1 == "0" && bin2 == "0") {       // TestCase 5가 bin1, bin2가 모두 0인 경우, answer == "0" 불가능하여, int zero = 0;으로 둔 후 to_string을 이용함.
        int zero = 0;
        answer = to_string(zero);
        return answer;
    }

    for (int i = bin1.length() - 1; i >= 0; i--) {
        for (int j = 0; j < bin1.length() - i - 1; j++) {
            e1 *= 2;
        }
        if (bin1[i] == '1') {
            result1 += e1;
        }
        e1 = 1;
    }

    for (int i = bin2.length() - 1; i >= 0; i--) {
        for (int j = 0; j < bin2.length() - i - 1; j++) {
            e2 *= 2;
        }
        if (bin2[i] == '1') {
            result2 += e2;
        }
        e2 = 1;
    }

    sum = result1 + result2;

    while (sum > 1) {      // 2진수인 sum을 10진수로 변환
        if (sum % 2 == 1) {
            answer += '1';
        }
        else {
            answer += '0';
        }
        sum /= 2;
    }
    answer += '1';
    reverse(answer.begin(), answer.end());

    return answer;

}

string makeAnswer(string ans, int i) {
    if (i == 1) return "1" + ans;
    else return "0" + ans;
}

int getDigit(string bin, int i) {
    if (bin.length() > i) {
        return bin[bin.length() - i - 1] - '0'; // - '0' 아스키코드 값에서 0을 빼줘야 함.
    }
    else {
        return 0;
    }
}



string solution(string bin1, string bin2) {
    string answer = "";

    int a, b, c=0, s;
    int len = bin1.length();
    if (len < bin2.length()) len = bin2.length();
    for (int i = 0; i < len; i++) {
        a = getDigit(bin1, i);
        b = getDigit(bin2, i);
        s = (a + b + c) % 2;
        c = (a + b + c) / 2;
        answer = makeAnswer(answer, s);
    }
    if (c == 1) {
        answer = makeAnswer(answer, c);
    }

    return answer;

}











// 오류난 코드

/*#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>

using namespace std;

int to10(int a) {// 2진수를 10진수로 변환
    int n = 0;
    for (int j = 0; a >= 1; j++) {
        n += (a % 10) * pow(a, j);
        a /= 10;
    }
    return n;
}


int to2(int b) { //10진수를 2진수로 변환
    int n = 0;
    for (int i = 1; b >= 1; i *= 10) {
        n = (b % 2) * i + n;
        b /= 2;
    }
    return n;
}


int main(string bin1, string bin2) {
    string answer = "";

    int a = atoi(bin1.c_str());
    int b = atoi(bin2.c_str());
    int n;

    int sum = to10(a) + to10(b);

    answer = to2(sum);

    return answer;
} */
