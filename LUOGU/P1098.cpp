#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int p[4];
string s;
char c;
int main() {
    cin >> p[1] >> p[2] >> p[3];
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '-'){
            if (p[3] == 1){
                if(s[i - 1] + 1 <= s[i + 1]){
                    if (s[i - 1] + 1 == s[i + 1]){
                        continue;
                    }else{
                        if (p[1] == 1){
                            for (int j = s[i - 1] + 1; j < s[i + 1]; ++j) {
                                c =(char) j;
                                for (int k = 1; k <= p[2]; ++k) {
                                    cout << toupper(c);
                                }
                            }
                        }else if(p[1] == 2){
                            for (int j = s[i - 1] + 1; j < s[i + 1]; ++j) {
                                c = j;
                                for (int k = 1; k <= p[2]; ++k) {
                                    cout << tolower(c);
                                }
                            }
                        }else if (p[1] == 3){
                            for (int j = 1; j <= p[2]; ++j) {
                                cout << '*';
                            }
                        }
                    }
                }else if (s[i - 1] <= s[i + 1]) {
                    cout << s[i];
                }
            }else if (p[3] == 2){
                if(s[i - 1] + 1 <= s[i + 1]){
                    if (s[i - 1] + 1 == s[i + 1]){
                        continue;
                    }else{
                        if (p[1] == 1){
                            for (int j = s[i - 1] + 1; j < s[i + 1]; ++j) {
                                c = j;
                                for (int k = 1; k <= p[2]; ++k) {
                                    cout << toupper(c);
                                }
                            }
                        }else if(p[1] == 2){
                            for (int j = s[i - 1] + 1; j < s[i + 1]; ++j) {
                                c = j;
                                for (int k = 1; k <= p[2]; ++k) {
                                    cout << tolower(c);
                                }
                            }
                        }else if (p[1] == 3){
                            for (int j = 1; j <= p[2]; ++j) {
                                cout << '*';
                            }
                        }
                    }
                }else if (s[i - 1] <= s[i + 1]) {
                    cout << s[i];
                }
            }
        } else{
            cout << s[i];
        }
    }
    return 0;
}
