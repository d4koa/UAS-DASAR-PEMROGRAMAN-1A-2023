/*
Mata Kuliah : Dasar Pemrograman
Tugas       : Ujian Akhir Semester
Nama        : Dani Akhmad Maulana
Kelas       : Teknik Informatika 1A
Tanggal     : 12 Januari 2023
*/

#include <iostream>
using namespace std;

int i;
int pilih;
char yesno;
char ulang;
void menuUtama();
void doaDoa();
void AsmaulHusna();
void waktuSalat();
void azanIqamah();
void zikirHarian();
void penjelasanShadaqahZakat();
int zakat();
void about();
void tutupProgram();

void doaRumah();
void doaPerlindungan();
void doaKeluarga();
void doaLainnya();
void doaKumpulan();

void tutupAsmaulHusna();
void tutupDoa();

void zikirPagi();
void zikirSore();
void zikirSetelahSalat();

int zakatUang();
int zakatEmas();
int zakatPerak();

int main(){
    menuUtama();
    /*
    //doa-doa
    cout << "Doa Penguat Iman\n";
    cout << "";
    cout << "Doa Kebahagiaan Dunia dan Akhirat\n";
    cout << "شسسشمشةعشنشى\n";
    */


    /*
    cout << " [O] Doa Mohonkan Ampunan Kedua Orang Tua\n\n";
    cout << " Rabbigfirli waliwalidayya warhamhuma kama rabbayani shagira.";
    */
    return 0;
}

void menuUtama(){
    system("CLS");
    cout << "============================================================================================" << endl;
    cout << "\t\t\t\t     ---=MUSLIM PRO=---" << endl;
    cout << "============================================================================================" << endl << endl;

    cout << "";
    cout << " \t\t\t\t ----=FITUR MUSLIM PRO=----\n\n";
    cout << " [1] DOA HARIAN\n\n";
    cout << " [2] ASMAUL HUSNA\n\n";
    cout << " [3] WAKTU SALAT\n\n";
    cout << " [4] AZAN & IQAMAH\n\n";
    cout << " [5] ZIKIR HARIAN\n\n";
    cout << " [6] SHADAQAH & ZAKAT\n\n";
    cout << " [7] TENTANG PROGRAM\n\n";
    cout << " [8] TUTUP PROGRAM\n\n";
    cout << "============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE FITUR MUSLIM PRO DI SEBELAH SINI (1/2/3/4/5/6/7/8) : " ; cin >> pilih;

    switch(pilih){
    case 1:
        doaDoa();
        break;
    case 2:
        AsmaulHusna();
        break;
    case 3:
        system("CLS");
        waktuSalat();
        break;
    case 4:
        azanIqamah();
        break;
    case 5:
        zikirHarian();
        break;
    case 6:
        penjelasanShadaqahZakat();
        break;
    case 7:
        about();
        break;
    case 8:
        tutupProgram();
        break;
    }
}

void doaDoa(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA-DOA HARIAN=---\n";
    cout << "==============================================================================================" << endl;
    cout << " \t\t\t\t----=DOA-DOA PILIHAN=----\n\n";
    cout << " [1] DOA DI RUMAH\n\n";
    cout << " [2] DOA PERLINDUNGAN\n\n";
    cout << " [3] DOA KELUARGA\n\n";
    cout << " [4] DOA LAINNYA\n\n";
    cout << " [5] KUMPULAN DOA\n\n";
    cout << " [6] MENU UTAMA\n\n";
    cout << " [7] TUTUP PROGRAM\n\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE DOA-DOA PILIHAN DI SEBELAH SINI (1/2/3/4/5/6/7) : "; cin >> pilih;

    switch(pilih){
    case 1:
        doaRumah();
        break;
    case 2:
        doaPerlindungan();
        break;
    case 3:
        doaKeluarga();
        break;
    case 4:
        doaLainnya();
        break;
    case 5:
        doaKumpulan();
        break;
    case 6:
        menuUtama();
        break;
    case 7:
        tutupProgram();
        break;
    }
}

void doaRumah(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA DI RUMAH=---\n";
    cout << "==============================================================================================" << endl;

    tutupDoa();
}

void doaPerlindungan(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA PERLINDUNGAN=---\n";
    cout << "==============================================================================================" << endl;

    tutupDoa();
}

void doaKeluarga(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA KELUARGA=---\n";
    cout << "==============================================================================================" << endl;

    tutupDoa();
}

void doaLainnya(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA LAINNYA=---\n";
    cout << "==============================================================================================" << endl;

    tutupDoa();
}

void doaKumpulan(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=KUMPULAN DOA=---\n";
    cout << "==============================================================================================" << endl;

    tutupDoa();
}

void tutupDoa(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] INGIN KEMBALI?\n";
    cout << " [2] KE MENU UTAMA?\n";
    cout << " [3] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

    if (pilih==1){
        doaDoa();
    } else if (pilih==2) {
        menuUtama();
    } else if (pilih==3) {
        tutupProgram();
    }
}

void AsmaulHusna(){
    system("CLS");
    cout << "============================================================================================" << endl;
    cout << "\t\t\t\t---=ASMAUL HUSNA=---\n";
    cout << "============================================================================================" << endl;
    cout << " \t\t\t    ----=99 NAMA-NAMA ALLAH=----\n\n\n";
    cout << " \t\t\t\t\t[00]YA ALLAH\n\n";
    cout << " [01]YA RAHMAN\t\t[02]YA RAHIIM\t\t[03]YA MALIK\t\t[04]YA QUDDUS\n\n";
    cout << " [05]YA SALAAM\t\t[06]YA MU'MIN\t\t[07]YA MUHAYMIN\t\t[08]YA 'AZIZ\n\n";
    cout << " [09]YA JABBAR\t\t[10]YA MUTAKABBIR\t[11]YA KHALIQ\t\t[12]YA BAARI'\n\n";
    cout << " [13]YA MUSHAWWIR\t[14]YA GHAFFAAR\t\t[15]YA QAHHAAR\t\t[16]YA WAHHAAB\n\n";
    cout << " [17]YA RAZZAAQ\t\t[18]YA FATTAAH\t\t[19]YA 'ALIIM\t\t[20]YA QAABIDH\n\n";
    cout << " [21]YA BAASITH\t\t[22]YA KHAAFIDH\t\t[23]YA RAAFI'\t\t[24]YA MU'IZZ\n\n";
    cout << " [25]YA MUDZIL\t\t[26]YA SAMII'\t\t[27]YA BASHIIR\t\t[28]YA HAKAM\n\n";
    cout << " [29]YA 'ADL\t\t[30]YA LATHIIF\t\t[31]YA KHABIIR\t\t[32]YA HALIIM\n\n";
    cout << " [33]YA 'AZHIIM\t\t[34]YA GHAFUUR\t\t[35]YA SYAKUUR\t\t[36]YA 'ALIY\n\n";
    cout << " [37]YA KABIIR\t\t[38]YA HAFIZH\t\t[39]YA MUQIIT\t\t[40]YA HASIIB\n\n";
    cout << " [41]YA JALIIL\t\t[42]YA KARIIM\t\t[43]YA RAQIIB\t\t[44]YA MUJIIB\n\n";
    cout << " [45]YA WAASI'\t\t[46]YA HAKIM\t\t[47]YA WADUUD\t\t[48]YA MAJIID\n\n";
    cout << " [49]YA BAA'ITS\t\t[50]YA SYAHIID\t\t[51]YA HAQQ\t\t[52]YA WAKIIL\n\n";
    cout << " [53]YA QAWIYYU\t\t[54]YA MATIIN\t\t[55]YA WALIYY\t\t[56]YA HAMIID\n\n";
    cout << " [57]YA MUHSHII\t\t[58]YA MUBDI'\t\t[59]YA MU'IID\t\t[60]YA MUHYII\n\n";
    cout << " [61]YA MUMIITU\t\t[62]YA HAYYU\t\t[63]YA QAYYUUM\t\t[64]YA WAAJID\n\n";
    cout << " [65]YA MAAJID\t\t[66]YA WAHID\t\t[67]YA AHAD\t\t[68]YA SHAMAD\n\n";
    cout << " [69]YA QAADIR\t\t[70]YA MUQTADIR\t\t[71]YA MUQADDIM\t\t[72]YA MU'AKKHIR\n\n";
    cout << " [73]YA AWWAL\t\t[74]YA AAKHIR\t\t[75]YA ZHAAHIR\t\t[76]YA BAATHIN\n\n";
    cout << " [77]YA WAALI\t\t[78]YA MUTA'AALII\t[79]YA BARRU\t\t[80]YA TAWWAAB\n\n";
    cout << " [81]YA MUNTAQIM\t[82]YA AFUWW\t\t[83]YA RA'UUF\t\t[84]YA MALIKUL MULK\n\n";
    cout << " [85]YA DZUL JALAALI WAL IKRAAM\t\t\t[86]YA MUQSITH\t\t[87]YA JAMII'\n\n";
    cout << " [88]YA GHANIYY\t\t[89]YA MUGHNII\t\t[90]YA MAANI\t\t[91]YA DHAAR\n\n";
    cout << " [92]YA NAFI'\t\t[93]YA NUUR\t\t[94]YA HAADII\t\t[95]YA BADII'\n\n";
    cout << " [96]YA BAAQII\t\t[97]YA WAARITS\t\t[98]YA RASYIID\t\t[99]YA SHABUUR\n\n";

    tutupAsmaulHusna();
}

void tutupAsmaulHusna(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    if (pilih==1){
        menuUtama();
    } else if (pilih==2) {
        tutupProgram();
    } else {
        AsmaulHusna();
    }
}

void waktuSalat(){
    string salatFardhu[5] = {" SUBUH   "," DZUHUR  "," ASHAR   "," MAGHRIB "," ISYA    "};
    string waktuSalatFardhu[5] = {"03:58 ","11:25 ","14:50 ","17:29 ", "18:43 "};
    string salatSunnah[12];
    string waktuSalatSunnah[12];

    timesalat:
    cout << "============================================================================================" << endl;
    cout << "\t\t\t\t---=WAKTU SALAT=---\n";
    cout << "============================================================================================" << endl;

    cout << " \t\t\t\t----=WAKTU SALAT PILIHAN=----\n\n";
    cout << " [1] WAKTU SALAT FARDHU\n\n";
    cout << " [2] WAKTU SALAT SUNNAH\n\n";
    cout << " [3] MENU UTAMA\n\n";
    cout << " [4] TUTUP PROGRAM\n\n";
    cout << "============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE WAKTU SALAT PILIHAN DI SEBELAH SINI (1/2/3/4) : "; cin >> pilih;

    if (pilih==1){
        system("CLS");
        cout << "============================================================================================" << endl;
        cout << " \t\t\t\t----=WAKTU SALAT PILIHAN=----\n";
        cout << "============================================================================================" << endl;
        cout << " \t\t\t       -----=JADWAL SALAT FARDHU=-----\n\n";

        for(i=0;i<=4;i++){
            cout << salatFardhu[i] << "\t" << waktuSalatFardhu[i] << endl << endl;
        }
    } else if (pilih==2) {
        system("CLS");
        cout << "============================================================================================" << endl;
        cout << " \t\t\t\t----=WAKTU SALAT PILIHAN=----\n";
        cout << "============================================================================================" << endl;
        cout << " \t\t\t       -----=JADWAL SALAT SUNNAH=-----\n\n";
    } else if (pilih==3) {
        menuUtama();
    } else if (pilih==4) {
        tutupProgram();
    } else {
        system("CLS");
        goto timesalat;
    }

}

void azanIqamah(){
    cout << "";
}

void zikirHarian(){
    cout << "";
}

void penjelasanShadaqahZakat(){
    cout << "";
}

int zakat(){
    int uang;
    return 0;
}

void about(){
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=TENTANG PROGRAM=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t----=PENJELASAN PROGRAM=----\n\n";

    /*
    //Tentang
    cout << "Apa itu Muslim Pro?";
    cout << "Pembuat program";
    cout << "Tujuan program";
    */

}

void tutupProgram(){
    cout << "==============================================================================================" << endl;
    cout << " OK PROGRAM SELESAI SAMPAI SINI, TERIMA KASIH BANYAK! :) \n";
    cout << "==============================================================================================" << endl;
}
