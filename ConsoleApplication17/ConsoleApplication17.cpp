#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    srand((time(0)));
    string text = "Eat some more of these soft French rolls but drink some tea";
    string text1 = "If he had something confidential to transmit then he wrote";
    string arr[2];
    arr[0] = text;
    arr[1] = text1;
    string cryptedText = arr[0];
    string cryptedText1 = arr[1];
    string cryptedArr[2];
    cryptedArr[0] = cryptedText;
    cryptedArr[1] = cryptedText1;
    string tryDecrypt = cryptedText;
    string tryDecrypt1 = cryptedText1;
    string tryDecryptArr[2];
    tryDecryptArr[0] = tryDecrypt;
    tryDecryptArr[1] = tryDecrypt1;
    int a = rand() % 10;
    int len = arr[0].length();
    int len1 = arr[1].length();
    int lenArr[2];
    lenArr[0] = len;
    lenArr[1] = len1;
    cout << a << endl;
    cout << lenArr[0] << endl;
    cout << lenArr[1] << endl;
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i <= lenArr[j]; i++) {
            if (cryptedArr[j][i] == ' ')
                i++;

            cryptedArr[j][i] = cryptedArr[j][i] + a;
            if (cryptedArr[j][i] > 122) {
                cryptedArr[j][i] = cryptedArr[j][i] - 26;
            }
            if (cryptedArr[j][i] > 90 && cryptedArr[j][i] < 97) {
                cryptedArr[j][i] = cryptedArr[j][i] - 26;
            }
        }
        cout << cryptedArr[j] << endl;

        int key[2];
        for (int i = -25; i <= 999; i++) {
            tryDecryptArr[j][0] = tryDecryptArr[j][0] + i;

            if (tryDecryptArr[j][0] == arr[j][0]) {
                key[j] = i;
                break;
            }
            tryDecryptArr[j][0] = cryptedArr[j][0];
        }
        cout << key[j] << endl;
    }
}