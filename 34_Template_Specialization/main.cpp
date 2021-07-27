//
//  main.cpp
//  34_Template_Specialization
//
//  Created by 세광 on 2021/07/27.
//

#include <iostream>
#include <string>

using namespace std;

template<typename T>
T getArraySum(const T arr[], int n) {
    cout << "template" << endl;
    T sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// 템플릿 특수화
// 특수화를 한 타입에 대해서는 특수하게 만들어준 다른 함수가 실행
template<>
string getArraySum<string>(const string arr[], int n) {
    cout << "template specialization" << endl;
    string sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum += ' ' + arr[i];
    }
    return sum;
}

int main() {
    string sarr[3] = { "hello", "world", "doodle" };
    string ssum = getArraySum(sarr, 3);
    cout << ssum << endl;
    
    int iarr[5] = { 3, 1, 4, 1, 5 };
    int isum = getArraySum(iarr, 5);
    cout << isum << endl;
}
