#include<iostream>
#include<vector>
#include<map>
using  namespace std;
/*

["Encrypter", "encrypt", "decrypt"]
[[['a', 'b', 'c', 'd'], ["ei", "zf", "ei", "am"], ["abcd", "acbd", "adbc", "badc", "dacb", "cadb", "cbda", "abad"]], ["abcd"], ["eizfeiam"]]

*/


class Encrypter {
public:
    //Data Members:
    map<char, string>mp;
    vector<string>d;

    //Parameterised Constructor
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        d = dictionary;
        for (int i = 0; i < keys.size(); i = i + 1) {
            mp[keys[i]] = values[i];
        }
    }

    string encrypt(string str) {

        string ans = "";
        for (int i = 0; i < str.size(); i = i + 1) {
            // ans = ans + mp[str[i]];

            if (mp.count(str[i]) == 1) {
                ans += mp[str[i]];
            } else {
                return "";
            }
        }
        return ans;
    }

    int decrypt(string str) {

        int count = 0;
        for (int i = 0; i < d.size(); i = i + 1) {
            string ans = encrypt(d[i]);
            if (ans == str) {
                count += 1;
            }
        }

        return count;
    }
};

int main() {

    vector<char>keys{'a', 'b', 'c', 'd'};
    vector<string>values{"ei", "zf", "ei", "am"};
    vector<string>dictionary{"abcd", "acbd", "adbc", "badc", "dacb", "cadb", "cbda", "abad"};

    Encrypter e(keys, values, dictionary);

    cout << e.encrypt("abcd") << endl;
    cout << e.decrypt("eizfeiam") << endl;
}