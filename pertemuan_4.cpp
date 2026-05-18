#include <iostream>
using namespace std;

int main() {
    system("cls");

    // //goto
    // goto a;
    // b:
    // cout << "adalah ";
    // goto c;
    // cout << "komputer ";
    // goto f;
    // c:
    // cout << "anak ";
    // goto d;
    // a:
    // cout << "Aku ";
    // goto b;
    // f:
    // cout << "USU. ";
    // goto n;
    // d:
    // cout << "ilmu ";
    // goto e;



    //menampilkan angka kelipatan 5
    // int i = 40;

    // lipat:
    // if (i%5 == 0) {
    //     cout << i << " ";
    // }
    // i--;

    // if (i >= 5) {
    //     goto lipat;
    // }
    // cout << endl;



    //while statement
//    return 0;



 // for loop
    // for (int i = 1; i <= 5; i++) {
    //     cout << i << ".wowo\n" << endl;
    // }
    //  cout << endl;


    //atributing lenght
//     string kata;
//     cout << "masukkan nama : ";
//     cin >> kata;
//     for (int i = 0; i < kata.length(); i++) {
//         cout << i+1 << "." << kata[i] << endl;
// }




// Nested for
 for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
return 0;
}