// HW 3-2 숨어있는 숫자의 덧셈
// 문자열 my_string이 매개변수로 주어집니다. 
// my_string은 소문자, 대문자, 자연수로만 구성되어있습니다. 
// my_string안의 자연수들의 합을 return하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;

int Sum(string a_string) {
    int i, num = 0, sum = 0;

    for (i = 0; a_string[i]; i++) {
        if (a_string[i] >= '0' && a_string[i] <= '9') {
            num = num * 10 + a_string[i] - '0';
        }
        else {
            if (num > 0) {
                sum = sum + num;
                num = 0;
            }
        }
    }
    if (num > 0) sum += num;

    return sum;
}


int solution(string my_string) {
    int answer = 0;

    answer = Sum(my_string);

    return answer;
}




int changeToDec(vector<int> temp) {
    int k = 1;
    int num = 0;
    for (int i = temp.size() - 1; i >= 0; i--, k *= 10)
        num += temp[i] * k;
    return num;
}



int getNumbers(string my_string) {
    vector<int> numbers;
    vector<int> temp;
    for (int i = 0; i < my_string.length(); i++) {

        if (my_string[i] < '0' || my_string[i] > '9') {
            if (temp.size() > 0) {
                numbers.push_back(changeToDec(temp));
                temp.clear();
            }
        }
        else {
            temp.push_back(my_string[i] - '0');
        }

        numbers.push_back(changeToDec(temp));
    } return numbers;
}


int solution(string my_string) {
    int answer = 0;

    vector<int> numbers = getNumbers(my_string);
    for (int i = 0; i < numbers.size(); i++) {
        answer += numbers[i];
    }

    return answer;
}