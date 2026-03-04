#include <iostream>
using namespace std;

  int main(){
   system("cls");

    int x;

    cout << "Masukkan sebuah nilai : "; 
   cin >> x;

// // If Statement
//     if (x > 75){
//         cout << "Anda Lulus" << endl;

// If Else Statement
    // if (x > 75){
    //     cout << "Anda Lulus" << endl;
        
    // } else {
    //     cout << "Anda Tidak Lulus" << endl;
    // }

    // return 0;


// if else if statement

    // if (x > 85){
    //     cout << "Nilai Anda A" << endl;
        
    // } else if (x > 75){
    //     cout << "Nilai Anda B" << endl;

    // } else if (x > 65){
    //     cout << "Nilai Anda C" << endl;

    // } else {
    //     cout << "Nilai Anda D" << endl;
    // }

    // return 0;

    //string Lampu;
    // cout << "kondisi : ";
    // getline(cin, Lampu);

    // if (Lampu == "Hijau"){
    //     cout << "Silahkan Jalan" << endl;
    // } else if (Lampu == "Kuning"){
    //     cout << "Hati-Hati" << endl;
    // } else if (Lampu == "Merah"){
    //     cout << "Berhenti" << endl;
    // } else {
    //     cout << "Kondisi Tidak Valid" << endl;
    //     return 0;
    // }

    // Nasted If Statement

    // if (x > 75){
    //     cout << "Anda lulus" << endl;
    //     if (x == 100){
    //         cout << "Nilai Anda Sempurna" << endl;
    //     } 
    // }else{
    //         cout << "Anda tidak lulus" << endl;
    //     }

    // switch (x) {
    //     case 1:
    //     cout <<"senin" << endl;
    //     break;
    //     case 2:
    //     cout <<"selasa" << endl;
    //     break;
    //     case 3:
    //     cout <<"rabu" << endl;
    //     break;
    //     case 4:
    //     cout <<"kamis" << endl;
    //     break;
    //     case 5:
    //     cout <<"jumat" << endl;
    //     break;
    //     case 6:
    //     cout <<"sabtu" << endl;

    //     case 7:
    //     cout <<"minggu" << endl;
    //     break;
    //     default:
    //     cout <<"inputan tidak valid" << endl;
    // }

    // switch range

    // switch (x) {
    //     case 85 ... 100: cout << "Nilai Anda A" << endl; break;
    //     case 80 ... 84: cout << "Nilai Anda B" << endl; break;
    //     case 70 ... 79: cout << "Nilai Anda Cihuy" << endl; break;
    //     case 20 ... 69: cout << "Nilai Anda D" << endl; break;
    //     case 0 ... 19: cout << "Nilai Anda E, E for Engginer" << endl; break;
    //     default: cout << "Nilai invalid" << endl; break;
    // }

    // Tenary Operator

    string cek = (x % 2 == 0) ? "Genap" : "Ganjil";
    cout << "Nilai " << x << " itu adalah bilangan " << cek << endl;
  


}