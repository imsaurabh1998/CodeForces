

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

    string number;
    cin >> number;




//    solution1 Begin
//
//#pragma region Solution2
//
//
//
//
//    if (number.length() == 1) {
//
//        if (number == "8" || number == "0") {
//            std::cout << "YES" << endl;
//            std::cout << number << endl;
//            return 0;
//        }
//        else {
//            std::cout << "NO";
//            return 0;
//        }
//
//    }
//
//    string newString = number;
//    string result;
//    for (int i = 0; i < newString.length() ; i++) {
//
//        if (newString.length()>2 && stoi(newString.substr(newString.length() - 3, 3)) % 8 == 0) {
//            std::cout << "YES" << endl;
//            std::cout << newString << endl;
//            return 0;
//        }
//        else if (newString.length() > 3) {
//
//            string temp = newString.substr(newString.length() - 4, 4);
//            int t;
//            string trans;
//
//            trans += temp[0];
//            trans += temp[1];
//            trans += temp[2];
//            t = stoi(trans);
//            if (t % 8 == 0) {
//                std::cout << "YES" << endl;
//                result = newString.substr(0, newString.length() - 1);
//                std::cout << result << endl;
//                return 0;
//            }
//
//            trans = "";
//            trans += temp[0];
//            trans += temp[1];
//            trans += temp[3];
//            t = stoi(trans);
//            if (t % 8 == 0) {
//                std::cout << "YES" << endl;
//                result = newString.substr(0, newString.length() - 2);
//                result += temp[3];
//                std::cout << result << endl;
//                return 0;
//            }
//
//            trans = "";
//            trans += temp[0];
//            trans += temp[2];
//            trans += temp[3];
//            t = stoi(trans);
//            if (t % 8 == 0) {
//                std::cout << "YES" << endl;
//                result = newString.substr(0, newString.length() - 3);
//                result += temp[2];
//                result += temp[3];
//                std::cout << result << endl;
//                return 0;
//            }
//
//        }
//        else  {
//            bool flag = false;
//            string flagRes;
//            if (stoi(newString) % 8 == 0) {
//                flagRes = newString;
//                flag = true;
//            }
//            else if ((newString[0] - '0') % 8 == 0) {
//                flagRes = newString[0];
//                flag = true;
//            }
//            else if ((newString[1] - '0') % 8 == 0) {
//                flagRes = newString[1];
//                flag = true;
//            }
//
//            if (flag) {
//                cout << "YES" << endl;
//                cout << flagRes << endl;
//                return 0;
//            }
//            else break;
//        }
//
//        newString = newString.substr(0, newString.length() - 1);
//
//
//    }
//
//    cout << "NO" << endl;

//solution 1 ended





    int found = false;
    int answer;

    typedef unsigned int u_int;

    for (u_int i = 0; i < number.size() && !found; i++) {
        if (number[i] == '8' || number[i] == '0')
            found = true, answer = number[i] - '0';
    }

    for (u_int i = 0; i < number.size() && !found; i++) {
        for (u_int j = i + 1; j < number.size() && !found; j++) {
            int first_digit = number[i] - '0', second_digit = number[j] - '0';
            int number_formed = 10 * first_digit + second_digit;

            if (number_formed % 8 == 0)
                found = true, answer = number_formed;
        }
    }

    for (u_int i = 0; i < number.size() && !found; i++) {
        for (u_int j = i + 1; j < number.size() && !found; j++) {
            for (u_int k = j + 1; k < number.size() && !found; k++) {
                int first_digit = number[i] - '0', second_digit = number[j] - '0', third_digit = number[k] - '0';
                int number_formed = 100 * first_digit + 10 * second_digit + third_digit;

                if (number_formed % 8 == 0) {
                    answer = number_formed;
                    found = true;
                }
            }
        }
    }

    if (found)
        printf("YES\n%d\n", answer);
    else
        printf("NO\n");

    return 0;


}