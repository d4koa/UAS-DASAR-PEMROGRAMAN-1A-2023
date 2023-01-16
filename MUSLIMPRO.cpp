/*
Mata Kuliah : Dasar Pemrograman
Tugas       : Ujian Akhir Semester
Nama        : Dani Akhmad Maulana
Kelas       : Teknik Informatika 1A
Tanggal     : 12 Januari 2023
*/

#include <iostream>
using namespace std;

//deklarasi variabel
int i;
int pilih;
char ulang;

//fungsi tanpa nilai balik
void menuUtama();
void doaDoa();
void AsmaulHusna();
void waktuSalat();
void azanIqamah();
void zikirHarian();
void shadaqahZakat();
void tentangProgram();
void tutupProgram();

//sub fungsi doa harian
void doaRumah();
void doaPerlindungan();
void doaKeluarga();
void doaLainnya();
void doaKumpulan();

//struct waktu salat
struct waktuSalatSunnah{
    string salat;
    string rakaat;
    string ket;
    string waktu;
}dhuha,qabliyah1,qabliyah2,qabliyah3,qabliyah4,qabliyah5,badiyah1,badiyah2,badiyah3,tasbih1,tasbih2,tahajjud1,tahajjud2,tahajjud3,istikharah,taubat;

//sub fungsi zikir harian
void zikirPagi();
void zikirSore();
void zikirSetelahSalat();

//sub fungsi perhitungan zakat
void penjelasanShadaqah();
void penjelasanZakat();
void perhitunganZakat();

//fungsi tutup program
void tutupDoa();
void tutupAsmaulHusna();
void tutupWaktuSalat();
void tutupAzanIqamah();
void tutupShadaqahZakat();
void tutupTentangProgram();

//fungsi utama
int main(){
    menuUtama();
    return 0;
}

//fungsi menu utama
void menuUtama(){
    //tampilan menu utama
    system("CLS");
    cout << "============================================================================================" << endl;
    cout << "\t\t\t\t     ---=MUSLIM PRO=---" << endl;
    cout << "============================================================================================" << endl << endl;
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

    //percabangan switch
    switch(pilih){
    case 1:doaDoa();break;
    case 2:AsmaulHusna();break;
    case 3:system("CLS");waktuSalat();break;
    case 4:azanIqamah();break;
    case 5:zikirHarian();break;
    case 6:shadaqahZakat();break;
    case 7:tentangProgram();break;
    case 8:tutupProgram();break;
    default :menuUtama();break;
    }
}

//fungsi doa harian
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

    //percabangan switch
    switch(pilih){
    case 1:doaRumah();break;
    case 2:doaPerlindungan();break;
    case 3:doaKeluarga();break;
    case 4:doaLainnya();break;
    case 5:doaKumpulan();break;
    case 6:menuUtama();break;
    case 7:tutupProgram();break;
    default :doaDoa();break;
    }
}

//sub fungsi-fungsi doa harian
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

//fungsi tutup doa
void tutupDoa(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] INGIN KEMBALI?\n";
    cout << " [2] KE MENU UTAMA?\n";
    cout << " [3] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

    //percabangan if
    if (pilih==1){
        doaDoa();
    } else if (pilih==2) {
        menuUtama();
    } else if (pilih==3) {
        tutupProgram();
    }
}

//fungsi asmaul husna
void AsmaulHusna(){
    //tampilan asmaul husna
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

//fungsi tutup asmaul husna
void tutupAsmaulHusna(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan if
    if (pilih==1){
        menuUtama();
    } else if (pilih==2) {
        tutupProgram();
    } else {
        AsmaulHusna();
    }
}

//fungsi waktu salat
void waktuSalat(){
    //array salat dan waktunya
    string salatFardhu[5] = {" SUBUH   "," DZUHUR  "," ASHAR   "," MAGHRIB "," ISYA    "};
    string waktuSalatFardhu[5] = {"03:58 ","11:25 ","14:50 ","17:29 ", "18:43 "};

    //tampilan menu waktu salat dan goto
    system("CLS");
    timesalat:
    cout << "============================================================================================" << endl;
    cout << "\t\t\t\t---=WAKTU SALAT=---\n";
    cout << "============================================================================================" << endl;

    cout << " \t\t\t   ----=WAKTU SALAT PILIHAN=----\n\n";
    cout << " [1] WAKTU SALAT FARDHU\n\n";
    cout << " [2] WAKTU SALAT SUNNAH\n\n";
    cout << " [3] MENU UTAMA\n\n";
    cout << " [4] TUTUP PROGRAM\n\n";
    cout << "============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE WAKTU SALAT PILIHAN DI SEBELAH SINI (1/2/3/4) : "; cin >> pilih;

    //percabangan if... else if... else...
    if (pilih==1){
        timesalatfardhu:
        system("CLS");
        cout << "============================================================================================" << endl;
        cout << " \t\t\t\t----=WAKTU SALAT PILIHAN=----\n";
        cout << "============================================================================================" << endl;
        cout << " \t\t\t       -----=JADWAL SALAT FARDHU=-----\n\n";

        //perulangan for
        for(i=0;i<=4;i++){
            cout << salatFardhu[i] << "\t" << waktuSalatFardhu[i] << endl << endl;
        }

        tutupWaktuSalat();
        if (pilih!=1 || pilih!=2 || pilih!=3){
            goto timesalatfardhu;
        }
    } else if (pilih==2) {
        //struct salat sunnah
        dhuha.salat="DHUHA\t\t";dhuha.rakaat="2 - 8 RAKAAT\t";dhuha.waktu="PUKUL 07:00-11:00 AM\n\n";
        qabliyah1.salat="QABLIYAH SUBUH\t";qabliyah1.rakaat="2 RAKAAT\t";qabliyah1.waktu="SETELAH AZAN DAN SEBELUM SALAT FARDHU SUBUH\n\n";
        qabliyah2.salat="QABLIYAH DZUHUR\t";qabliyah2.rakaat="4 RAKAAT\t";qabliyah2.waktu="SETELAH AZAN DAN SEBELUM SALAT FARDHU DZUHUR\n\n";
        badiyah1.salat="BA'DIYAH DZUHUR\t";badiyah1.rakaat="2 RAKAAT\t";badiyah1.waktu="SETELAH SALAT FARDHU DZUHUR\n\n";
        qabliyah3.salat="QABLIYAH ASHAR\t";qabliyah3.rakaat="2 RAKAAT\t";qabliyah3.waktu="SETELAH AZAN DAN SEBELUM SALAT FARDHU ASHAR\n\n";
        qabliyah4.salat="QABLIYAH MAGHRIB\t";qabliyah4.rakaat="2 RAKAAT\t";qabliyah4.waktu="SETELAH AZAN DAN SEBELUM SALAT FARDHU MAGHRIB\n\n";
        badiyah2.salat="BA'DIYAH MAGHRIB\t";badiyah2.rakaat="2 RAKAAT\t";badiyah2.waktu="SETELAH SALAT FARDHU MAGHRIB\n\n";
        qabliyah5.salat="QABLIYAH ISYA\t";qabliyah5.rakaat="2 RAKAAT\t";qabliyah5.waktu="SETELAH AZAN DAN SEBELUM SALAT FARDHU ISYA\n\n";
        badiyah3.salat="BA'DIYAH ISYA\t";badiyah3.rakaat="2 RAKAAT\t";badiyah3.waktu="SETELAH SALAT FARDHU ISYA\n\n";
        tasbih1.salat="TASBIH\t\t";tasbih1.rakaat="4 RAKAAT\t";tasbih1.waktu="JIKA SIANG HARI 4 RAKAAT DENGAN DUA SALAM\n\n";
        tasbih2.salat="TASBIH\t\t";tasbih2.rakaat="4 RAKAAT\t";tasbih2.waktu="JIKA SIANG HARI 4 RAKAAT DENGAN SATU SALAM\n\n";
        tahajjud1.salat="TAHAJJUD\t\t";tahajjud1.rakaat="2 - 12 RAKAAT\t";tahajjud1.waktu="SEPERTIGA MALAM PERTAMA PADA PUKUL 08:00-10:30 AM\n\n";
        tahajjud2.salat="TAHAJJUD\t\t";tahajjud2.rakaat="2 - 12 RAKAAT\t";tahajjud2.waktu="SEPERTIGA MALAM PERTAMA PADA PUKUL 10:30-01:30 AM\n\n";
        tahajjud3.salat="TAHAJJUD\t\t";tahajjud3.rakaat="2 - 12 RAKAAT\t";tahajjud3.waktu="SEPERTIGA MALAM PERTAMA PADA PUKUL 01:30-04:30 AM\n\n";
        istikharah.salat="ISTIKHARAH\t";istikharah.rakaat="2 RAKAAT\t";istikharah.waktu="WAKTUNYA BEBAS KECUALI PADA WAKTU DILARANG SALAT\n\n";
        taubat.salat="TAUBAT\t\t";taubat.rakaat="2 RAKAAT\t";taubat.waktu="WAKTUNYA BEBAS KECUALI PADA WAKTU DILARANG SALAT\n\n";
        system("CLS");
        cout << "============================================================================================" << endl;
        cout << " \t\t\t\t-----=WAKTU SALAT SUNNAH=-----\n";
        cout << "============================================================================================\n" << endl;
        cout << " \t\t\t\t-----=SALAT-SALAT SUNNAH=-----\n\n";
        cout << "============================================================================================" << endl;
        cout << " NAMA SALAT\t\tRAKAAT\t\tWAKTU\n";
        cout << "============================================================================================" << endl;
        cout << " SALAT " << dhuha.salat + dhuha.rakaat + dhuha.ket + dhuha.waktu;
        cout << " SALAT " << qabliyah1.salat + qabliyah1.rakaat + qabliyah1.waktu;
        cout << " SALAT " << qabliyah2.salat + qabliyah2.rakaat + qabliyah2.waktu;
        cout << " SALAT " << badiyah1.salat + badiyah1.rakaat + badiyah1.waktu;
        cout << " SALAT " << qabliyah3.salat + qabliyah3.rakaat + qabliyah3.waktu;
        cout << " SALAT " << qabliyah4.salat + qabliyah4.rakaat + qabliyah4.waktu;
        cout << " SALAT " << badiyah2.salat + badiyah2.rakaat + badiyah2.waktu;
        cout << " SALAT " << qabliyah5.salat + qabliyah5.rakaat + qabliyah5.waktu;
        cout << " SALAT " << badiyah3.salat + badiyah3.rakaat + badiyah3.waktu;
        cout << " SALAT " << tasbih1.salat + tasbih1.rakaat + tasbih1.waktu;
        cout << " SALAT " << tasbih2.salat + tasbih2.rakaat + tasbih2.waktu;
        cout << " SALAT " << tahajjud1.salat + tahajjud1.rakaat + tahajjud1.waktu;
        cout << " SALAT " << tahajjud2.salat + tahajjud2.rakaat + tahajjud2.waktu;
        cout << " SALAT " << tahajjud3.salat + tahajjud3.rakaat + tahajjud3.waktu;
        cout << " SALAT " << istikharah.salat + istikharah.rakaat + istikharah.waktu;
        cout << " SALAT " << taubat.salat + taubat.rakaat + taubat.waktu;
        tutupWaktuSalat();
    } else if (pilih==3) {
        menuUtama();
    } else if (pilih==4) {
        tutupProgram();
    } else {
        system("CLS");
        goto timesalat;
    }

}

//fungsi tutup waktu salat
void tutupWaktuSalat(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] INGIN KEMBALI?\n";
    cout << " [2] KE MENU UTAMA?\n";
    cout << " [3] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

    //percabangan
    if (pilih==1){
        waktuSalat();
    } else if (pilih==2) {
        menuUtama();
    } else if (pilih==3) {
        tutupProgram();
    }
}

//fungsi azan dan iqamah
void azanIqamah(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=AZAN & IQAMAH=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t     ----=PENJELASAN MENGENAI AZAN & IQAMAH=----\n\n";

    tutupAzanIqamah();
}

//fungsi tutup azan dan iqamah
void tutupAzanIqamah(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan if else
    if (pilih==1){
        menuUtama();
    } else if (pilih==2) {
        tutupProgram();
    } else {
        azanIqamah();
    }
}

//fungsi zikir harian
void zikirHarian(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=ZIKIR HARIAN=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t      ----=PILIHAN ZIKIR=-----\n\n";
    cout << " [1] ZIKIR PAGI\n\n";
    cout << " [2] ZIKIR SORE\n\n";
    cout << " [3] ZIKIR SETELAH SALAT\n\n";
    cout << " [4] MENU UTAMA\n\n";
    cout << " [5] TUTUP PROGRAM\n\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN ZIKIR HARIAN DI SEBELAH SINI (1/2/3/4/5) : "; cin >> pilih;

    //percabangan switch
    switch(pilih){
    case 1:zikirPagi();break;
    case 2:zikirSore();break;
    case 3:zikirSetelahSalat();break;
    case 4:menuUtama();break;
    case 5:tutupProgram();break;
    default :zikirHarian();break;
    }
}

//sub fungsi-fungsi zikir harian
void zikirPagi(){
    cout << "";
}

void zikirSore(){
    cout << "";
}

void zikirSetelahSalat(){
    cout << "";
}

//fungsi shadaqah dan zakat
void shadaqahZakat(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=SHADAQAH & ZAKAT=---\n";
    cout << "==============================================================================================" << endl;
    cout << " \t\t\t\t----=PILIHAN SHADAQAH & ZAKAT=----\n\n";
    cout << " [1] PENJELASAN SHADAQAH\n\n";
    cout << " [2] PENJELASAN ZAKAT\n\n";
    cout << " [3] PERHITUNGAN ZAKAT\n\n";
    cout << " [4] MENU UTAMA\n\n";
    cout << " [5] TUTUP PROGRAM\n\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN ZIKIR HARIAN DI SEBELAH SINI (1/2/3/4/5) : "; cin >> pilih;

    //percabangan switch
    switch(pilih){
    case 1:zikirPagi();break;
    case 2:zikirSore();break;
    case 3:zikirSetelahSalat();break;
    case 4:menuUtama();break;
    case 5:tutupProgram();break;
    default :zikirHarian();break;
    }
}

//sub fungsi-fungsi shadaqah & zakat
void penjelasanShadaqah(){
    cout << "";
}

void penjelasanZakat(){
    cout << "";
}

void perhitunganZakat(){
    cout << "";
}

//fungsi tentang program
void tentangProgram(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=TENTANG PROGRAM=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t----=PENJELASAN PROGRAM=----\n\n";
    cout << " [1] APA ITU MUSLIM PRO?\n\n";
    cout << " MUSLIM PRO adalah sebuah program yang bla-bla...\n\n";
    cout << " [2] PEMBUAT PROGRAM\n\n";
    cout << " Pembuat program MUSLIM PRO adalah bla-bla...\n\n";
    cout << " [3] TUJUAN PROGRAM\n\n";
    cout << " Program MUSLIM PRO ini dibuat dengan tujuan bla-bla...\n\n";
    cout << "==============================================================================================" << endl;

    tutupTentangProgram();
}

//fungsi tutup tentang program
void tutupTentangProgram(){
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan if
    if (pilih==1){
        menuUtama();
    } else if (pilih==2) {
        tutupProgram();
    } else {
        tentangProgram();
    }
}

//fungsi tutup program
void tutupProgram(){
    cout << "==============================================================================================" << endl;
    cout << " OK PROGRAM SELESAI SAMPAI SINI, TERIMA KASIH BANYAK! :) \n";
    cout << "==============================================================================================" << endl;
}
