#include <iostream>

using namespace std;


int main() {
    cout<<boolalpha;
    bool equal_result {false};
    bool not_equal_result {false};
    char char1{}, char2{};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result (equals) : " << equal_result << endl;
    cout << "Comparision result (not equals) : " << not_equal_result << endl;
}