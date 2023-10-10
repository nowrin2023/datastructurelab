#include <iostream>


using namespace std;

struct CustomCipher {
    static string encode(const string& s, int j) {
        string encoded = s;
        for (int i = j; i < encoded.length(); i++) {
            encoded[i] += 3;
        }
        return encoded;
    }

    static string decode(const string& s, int j) {
        string decoded = s;
        for (int i = j; i < decoded.length(); i++) {
            decoded[i] -= 3;
        }
        return decoded;
    }
};

int main() {
    string input;
    int skip_count;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the skip count: ";
    cin >> skip_count;

    string encoded = CustomCipher::encode(input, skip_count);
    cout << "Encoded: " << encoded << endl;

    string decoded = CustomCipher::decode(encoded, skip_count);
    cout << "Decoded: " << decoded << endl;

    return 0;
}
