/*
Mata Kuliah : Dasar Pemrograman
Tugas       : Ujian Akhir Semester
Nama        : Dani Akhmad Maulana
Kelas       : Teknik Informatika 1A
Tanggal     : 12 Januari 2023
*/

/*
    PROGRAM MUSLIM PRO

    MUSLIM PRO MERUPAKAN PROGRAM YANG CARA KERJANYA MIRIP DENGAN APLIKASI PEMBANTU IBADAH LAINNYA
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
void Zakat();
void tentangProgram();
void tutupProgram();

//sub fungsi doa harian
void doaRumah();
void doaKeluarga();
void doaLainnya();


//struct waktu salat
struct waktuSalatSunnah{
    string salat;
    string rakaat;
    string waktu;
}dhuha,qabliyah1,qabliyah2,qabliyah3,qabliyah4,qabliyah5,badiyah1,badiyah2,badiyah3,tasbih1,tasbih2,tahajjud1,tahajjud2,tahajjud3,istikharah,taubat;

//fungsi utama
int main(){
    menuUtama();
    return 0;
}

//fungsi menu utama
void menuUtama(){
    //tampilan menu utama
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t     ---=MUSLIM PRO=---" << endl;
    cout << "==============================================================================================" << endl;
    cout << " \t\t\t\t ----=FITUR MUSLIM PRO=----\n\n";
    cout << " [1] DOA HARIAN V\n\n";
    cout << " [2] ASMAUL HUSNA\n\n";
    cout << " [3] WAKTU SALAT\n\n";
    cout << " [4] AZAN & IQAMAH\n\n";
    cout << " [5] PENJELASAN ZAKAT\n\n";
    cout << " [6] TENTANG PROGRAM\n\n";
    cout << " [7] TUTUP PROGRAM\n\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE FITUR MUSLIM PRO DI SEBELAH SINI (1/2/3/4/5/6/7/8) : " ; cin >> pilih;

    //percabangan switch
    switch(pilih){
    case 1:doaDoa();break;
    case 2:AsmaulHusna();break;
    case 3:waktuSalat();break;
    case 4:azanIqamah();break;
    case 5:Zakat();break;
    case 6:tentangProgram();break;
    case 7:tutupProgram();break;
    default :menuUtama();break;
    }
}

//fungsi doa harian
void doaDoa(){
    system("CLS");
    cout << "==================================================================================" << endl;
    cout << "\t\t\t\t---=DOA-DOA HARIAN=---\n";
    cout << "==================================================================================" << endl;
    cout << " \t\t\t       ----=DOA-DOA PILIHAN=---\n\n";
    cout << " [1] DOA DI RUMAH\n\n";
    cout << " [2] DOA KELUARGA\n\n";
    cout << " [3] DOA LAINNYA\n\n";
    cout << " [4] MENU UTAMA\n\n";
    cout << " [5] TUTUP PROGRAM\n\n";
    cout << "==================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE DOA-DOA PILIHAN DI SEBELAH SINI (1/2/3/4/5) : "; cin >> pilih;

    //percabangan switch
    switch(pilih){
    case 1:doaRumah();break;
    case 2:doaKeluarga();break;
    case 3:doaLainnya();break;
    case 4:menuUtama();break;
    case 5:tutupProgram();break;
    default :doaDoa();break;
    }
}

//sub fungsi-fungsi doa harian
//doa rumah
void doaRumah(){
    //label
    doarum :
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA DI RUMAH=---\n";
    cout << "==============================================================================================" << endl;
    cout << " DOA MASUK RUMAH\n\n";
    cout << " ALLAHUMMA INNII AS-ALUKA KHOIROL MAULIJI WA KHOIROL MAKHROJI BISMILLAAHI WA LAJNAA WA\n\n";
    cout << " BISMILLAAHI KHOROJNAA WA'ALALLOHI ROBBINAA TAWAKKALNAA\n\n";
    cout << " DOA KELUAR RUMAH\n\n";
    cout << " BISMILLAAHI TAWAKKALTU 'ALALLOHI WA LAA HAULAA WALAA QUWWATA ILAA BILLAAHI\n\n";
    cout << " DOA MASUK WC\n\n";
    cout << " ALLOOHUMMA INNII A/UDZUBIKA MINAL KHUBUTSI WAL KHOBAA-ITS\n\n";
    cout << " DOA KELUAR WC\n\n";
    cout << " ALHAMDULILLAAHIL LADZII ADZHABA 'ANNILADZAAWA 'AAFAANIII\n\n";
    cout << " DOA SEBELUM MAKAN\n\n";
    cout << " ALLOOHUMMA BAARIK LANAA FIIMAA ROZAQTANAA WAQINAA 'ADZAABAN NAAR\n\n";
    cout << " DOA SETELAH MAKAN\n\n";
    cout << " ALHAMDULILLAAHIL LADZII ATH'AMANAA WA SAQOONAAWAJA'ALANAA MUSLIMIIN\n\n";
    cout << " DOA SEBELUM TIDUR\n\n";
    cout << " ALLAAHUMMA BISMIKA AHYAA WA BISMIKA AMUUT\n\n";
    cout << " DOA BANGUN TIDUR\n\n";
    cout << " ALHAMDULILLAAHIL LADZII AHYAANAA BA'DAMAA AMAATANAA WA-ILAIHIN NUSYUUR\n\n";
    cout << " DOA MEMAKAI PAKAIAN\n\n";
    cout << " ALLOOHUMMA INNI AS-ALUKA MIN KHOIRIHI WA KHOIRIMAA HUWA LAHU, WA-A'UUDZUBIKA MIN SYARRIHI\n";
    cout << " WASYARRIMAA HUWA LAH.\n\n";
    cout << " DOA MELEPAS PAKAIAN\n\n";
    cout << " BISMILLAAHIL LADZII LAA ILAAHA ILLAA HUWA\n\n";
    cout << " DOA BERCERMIN\n\n";
    cout << " ALHAMDULILLAAH, ALLOOHUMMA KAMAA HASSANTA KHOLQII FAHASSIN KHULUQII\n\n";
    cout << "==============================================================================================" << endl;
    cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] INGIN KEMBALI?\n";
    cout << " [2] KE MENU UTAMA?\n";
    cout << " [3] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

    //percabangan switch
    switch (pilih){
    case 1: doaDoa(); break;
    case 2: menuUtama(); break;
    case 3: tutupProgram(); break;
    default : goto doarum;
    }
}

//doa keluarga
void doaKeluarga(){
    //label
    doakel :
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA KELUARGA=---\n";
    cout << "==============================================================================================" << endl;
    cout << " DOA MOHONKAN AMPUN KEDUA ORANG TUA\n\n";
    cout << " RABBIGHFIR LII WALIWAA LIDAYYA WARHAMHUMAA KAMAA RABBAYAANII SHAGHIIROO\n\n";
    cout << " DOA AGAR ANAK JADI SHALEH/SHALEHAH\n\n";
    cout << " RABBI HABLI MINAS-SHAALIHIIN\n\n";
    cout << " DOA MOHONKAN KELUARGA SAKINAH\n\n";
    cout << " ROBBANNA HAB LANAA MIN AZWAAJINAA WADZURRIYYAATINAA QURROTA A'YUN, WAAJALNAA LILMUTTAQIINA\n";
    cout << " IMAAMA\n\n";
    cout << "==============================================================================================" << endl;
    cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] INGIN KEMBALI?\n";
    cout << " [2] KE MENU UTAMA?\n";
    cout << " [3] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

    //percabangan switch
    switch (pilih){
    case 1: doaDoa(); break;
    case 2: menuUtama(); break;
    case 3: tutupProgram(); break;
    default : goto doakel;
    }
}

//doa lainnya
void doaLainnya(){
    //label
    doalai:
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=DOA LAINNYA=---\n";
    cout << "==============================================================================================" << endl;
    cout << " DOA SEBELUM BELAJAR\n\n";
    cout << " RABBI ZIDNI ILMAN NAFI'A WARZUQNI FAHMA\n\n";
    cout << " DOA MOHON ILMU YANG BERMANFAAT\n\n";
    cout << " ALLAHUMMA INNI AS-ALUKA 'ILMAN NAAFI'AN, WA RIZQON THOYYIBAN, WA 'AMALAN MUTAQOBBALAN\n\n";
    cout << " DOA DIMUDAHKAN SEGALA URUSAN\n\n";
    cout << " ALLAHUMMA LAA SAHLA ILLA MAA JA'ALTAHU SAHLAA, WA ANTA TAJ'ALUL HAZNA IDZA SYI'TA SAHLAA\n";
    cout << " DOA MASUK MASJID\n\n";
    cout << " BISMILLAH, ALLOOHUMMA ALLOHUMMAFTAH LII ABWAABA ROHMATIK\n\n";
    cout << " DOA KELUAR MASJID\n\n";
    cout << " BISMILLAH, ALLOOHUMMA INNI AS-ALUKA MIN FADHLIK\n\n";
    cout << " DOA KETIKA BERSIN\n\n";
    cout << " ALHAMDULILLAH\n\n";
    cout << " DOA KETIKA MARAH\n\n";
    cout << " A'-UUDZU BILLAHI MINAS SYAITHANIR RAJIIM\n\n";
    cout << "==============================================================================================" << endl;
    cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] INGIN KEMBALI?\n";
    cout << " [2] KE MENU UTAMA?\n";
    cout << " [3] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

    //percabangan switch
    switch (pilih){
    case 1: doaDoa(); break;
    case 2: menuUtama(); break;
    case 3: tutupProgram(); break;
    default : goto doalai;
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

    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan switch
    switch (pilih){
    case 1: menuUtama(); break;
    case 2: tutupProgram(); break;
    default : AsmaulHusna();
    }
}

//fungsi waktu salat
void waktuSalat(){
    //array salat dan waktunya
    string salatFardhu[5] = {" SUBUH   "," DZUHUR  "," ASHAR   "," MAGHRIB "," ISYA    "};
    string waktuSalatFardhu[5] = {"03:58 ","11:25 ","14:50 ","17:29 ", "18:43 "};
    string rakaatSalatFardhu[5] = {"2 RAKAAT", "4 RAKAAT", "4 RAKAAT", "3 RAKAAT", "4 RAKAAT"};

    //tampilan menu waktu salat dan goto
    //label
    timesalat:
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=WAKTU SALAT=---\n";
    cout << "==============================================================================================" << endl;

    cout << " \t\t\t   ----=WAKTU SALAT PILIHAN=----\n\n";
    cout << " [1] WAKTU SALAT FARDHU\n\n";
    cout << " [2] WAKTU SALAT SUNNAH\n\n";
    cout << " [3] MENU UTAMA\n\n";
    cout << " [4] TUTUP PROGRAM\n\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE WAKTU SALAT PILIHAN DI SEBELAH SINI (1/2/3/4) : "; cin >> pilih;

    //percabangan if... else if... else...
    if (pilih==1){
        //label
        timesalatfardhu:
        system("CLS");
        cout << "==============================================================================================" << endl;
        cout << " \t\t----=WAKTU SALAT PILIHAN=----\n";
        cout << "==============================================================================================\n" << endl;
        cout << " JADWAL SALAT FARDHU\n";
        cout << "==================================\n";
        cout << " SHALAT \tWAKTU \tRAKAAT\n";
        cout << "==================================\n\n";

        //perulangan for
        for(i=0;i<=4;i++) {cout << salatFardhu[i] << "\t" << waktuSalatFardhu[i] << "\t" << rakaatSalatFardhu[i] << "\n\n";}

        //tutup
        cout << "==============================================================================================" << endl;
        cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
        cout << " [1] INGIN KEMBALI?\n";
        cout << " [2] KE MENU UTAMA?\n";
        cout << " [3] TUTUP PROGRAM?\n";
        cout << "==============================================================================================" << endl;
        cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

        //percabangan switch
        switch (pilih){
        case 1: waktuSalat(); break;
        case 2: menuUtama(); break;
        case 3: tutupProgram(); break;
        default : goto timesalatfardhu;}
    }
    else if (pilih==2) {
        //label
        timesalatsunnah :
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
        cout << "==============================================================================================" << endl;
        cout << " \t\t\t\t-----=WAKTU SALAT SUNNAH=-----\n";
        cout << "==============================================================================================\n" << endl;
        cout << " SALAT-SALAT SUNNAH\n";
        cout << "==============================================================================================" << endl;
        cout << " NAMA SALAT\t\tRAKAAT\t\tWAKTU\n";
        cout << "==============================================================================================" << endl;
        cout << " SALAT " << dhuha.salat + dhuha.rakaat + dhuha.waktu;
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

        cout << "==============================================================================================" << endl;
        cout << " INGIN KEMBALI, PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
        cout << " [1] INGIN KEMBALI?\n";
        cout << " [2] KE MENU UTAMA?\n";
        cout << " [3] TUTUP PROGRAM?\n";
        cout << "==============================================================================================" << endl;
        cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2/3) : "; cin >> pilih;

        //percabangan switch
        switch (pilih){
        case 1: waktuSalat(); break;
        case 2: menuUtama(); break;
        case 3: tutupProgram(); break;
        default : goto timesalatsunnah;
        }
    }
    else if (pilih==3) {menuUtama();}
    else if (pilih==4) {tutupProgram();}
    else {goto timesalat;}
}

//fungsi azan dan iqamah
void azanIqamah(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=AZAN & IQAMAH=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t     ----=PENJELASAN MENGENAI AZAN & IQAMAH=----\n\n\n";

    cout << " [1] PENGERTIAN AZAN DAN IQAMAH\n\n";
    cout << " - AZAN ADALAH PEMBERITAHUAN TENTANG SUDAH ATAU TELAH TIBA WAKTU SALAT.\n\n";
    cout << " - IQAMAH DARI SEGI BAHASA ADALAH MENDIRIKAN, YAITU KATA-KATA SEBAGAI TANDA BAHWA SALAT FARDHU\n";
    cout << " AKAN SEGERA DIMULAI.\n\n";
    cout << " - ORANG YANG BIASA MENGUMANDANGKAN AZAN DISEBUT MUAZIN.\n\n";
    cout << " - SALAT-SALAT SUNNAH TIDAK DIANJURKAN MENGGUNAKAN AZAN DAN IQAMAH, KECUALI SALAT SUNNAH YANG\n";
    cout << " DISUNAHKAN BERJAMA'AH. SEPERTI SALAT TARAWIH, SALAT IDUL FOTRI, SALAT IDUL ADHA DAN LAIN-LAIN\n\n";
    cout << " - AZAN DAN IQAMAH HUKUMNYA SUNAH MU'AKAD BAGI SALAT FARDHU, BAIK SALAT BERJAMA'AH MAUPUN SALAT\n";
    cout << " SENDIRIAN. PELAKSANAANNYA DIANJURKAN DENGAN SUARA YANG KERAS, BERDIRI, DAN MENGHADAP KIBLAT.\n\n\n";

    cout << " [2] SYARAT MUAZIN\n\n";
    cout << "  1. ISLAM\n\n";
    cout << "  2. TAMYIZ DAN LAKI-LAKI\n\n";
    cout << "  3. AZAN DAN IQAMAH DILAKUKAN KETIKA BENAR-BENAR MASUK WAKTU SALAT\n\n";
    cout << "  4. LAFAZH AZAN DAN IQAMAH DISERUKAN SECARA BERURUTAN DAN TERATUR\n\n\n";

    cout << " [3] SUNAH MUAZIN\n\n";
    cout << "  1. MUAZIN SUCI DARI HADAS\n\n";
    cout << "  2. DILAKUKAN DENGAN BERDIRI DAN MENGHADAP KIBLAT\n\n";
    cout << "  3. DISERUKAN DENGAN SUARA YANG NYARING DAN MERDU\n\n";
    cout << "  4. TEMPATNYA YANG DIPAKAI KEDUDUKANNYA LEBIH TINGGI, AGAR SUARANYA KEDENGARAN LEBIH JAUH\n\n";
    cout << "  5. MEMBACA SHALAWAT SETELAH SELESAI AZAN KEMUDIAN BERDOA\n\n";
    cout << "  6. ANTARA AZAN DAN IQAMAH DISUNAHKAN MEMBACA DOA\n\n\n";

    cout << " [4] LAFAZ AZAN\n\n";
    cout << "  1. ALLAHU AKBAR ALLAHU AKBAR(2X)\n    \"ALLAH MAHA BESAR, ALLAH MAHA BESAR\"\n\n";
    cout << "  2. ASYHADU AL LAA ILAAHA ILLALLAAH(2X)\n    \"AKU BERSAKSI, BAHWA TIADA TUHAN YANG WAJIB DI SEMBAH SELAIN ALLAH\"\n\n";
    cout << "  3. ASYHADU ANNA MUHAMMADAR RASUULULLAAH(2X)\n    \"AKU BERSAKSI, BAHWA NABI MUHAMMAD ADALAH UTUSAN ALLAH\"\n\n";
    cout << "  4. HAYYA'ALASH SHALAAH(2X)\n    \"MARILAH SALAT\"\n\n";
    cout << "  5. HAYYA'ALL FALAAH(2X)\n    \"MARILAH MENCAPAI KEMENANGAN\"\n\n";
    cout << "  6. ALLAHU AKBAR ALLAHU AKBAR(1X)\n    \"ALLAH MAHA BESAR\"\n\n";
    cout << "  7. LAA ILAAHAILLALLAAH(1X)\n    \"TIADA TUHAN SELAIN ALLAH\"\n\n\n";

    cout << " [5] MENJAWAB AZAN\n\n";
    cout << "  NO LAFAZ\t\t\t\t\tJAWABAN AZAN\n\n";
    cout << "  1. ALLAHU AKBAR ALLAHU AKBAR\t\t\tALLAHU AKBAR ALLAHU AKBAR\n\n";
    cout << "  2. ASYHADU AL LAA ILAAHA ILLALLAAH\t\tASYHADU AL LAA ILAAHA ILLALLAAH\n\n";
    cout << "  3. ASYHADU ANNA MUHAMMADAR RASUULULLAAH\tASYHADU ANNA MUHAMMADAR RASUULULLAAH\n\n";
    cout << "  4. HAYYA'ALASH SHALAAH\t\t\tLA HAWLA WALAA QUWWATA ILLA BILLA HILL ALIYIL AZIM\n\n";
    cout << "  5. HAYYA'ALL FALAAH\t\t\t\tLA HAWLA WALAA QUWWATA ILLA BILLA HILL ALIYIL AZIM\n\n";
    cout << "  6. ALLAHU AKBAR ALLAHU AKBAR\t\t\tALLAHU AKBAR ALLAHU AKBAR\n\n";
    cout << "  7. LAA ILAAHAILLALLAAH\t\t\tLAA ILAAHAILLALLAAH\n\n\n";

    cout << " [6] DOA SETELAH AZAN\n\n";
    cout << "  ALLAAHUMMA ROBBA HAADZIHID DA'WATIT TAAMMAH, WASHSHOLAATIL QOOIMAH, AATI MUHAMMADANIL\n";
    cout << " WASHIILATA WAL FADHILLAH, WAB'ATSHU MAQOOMAM MAHMUUDANIL LADZII WA'ADTAH, INNAKA LAA\n";
    cout << " TUKHLIFUL MII'AADZ.\n\n";
    cout << "  \"YA ALLAH, SESUNGGUHNYA ENGKAU ADALAH PEMILIK PANGGILAN YANG SEMPURNA INI, DAN SALAT\n";
    cout << " AKAN DIDIRIKAN. KARUNIAKANLAH KEPADA NABI MUHAMMAD AL WASILAH, DAN KARUNIA-KARUNIA YANG\n";
    cout << " BANYAK. DAN KARUNIAKANLAH DIA SEBAGAIMANA TELAH ENGKAU JANJUKAN.\"\n\n\n";

    cout << " [6] LAFAZ IQAMAH\n\n";
    cout << "  1. ALLAHU AKBAR ALLAHU AKBAR(1X)\n    \"ALLAH MAHA BESAR, ALLAH MAHA BESAR\"\n\n";
    cout << "  2. ASYHADU AL LAA ILAAHA ILLALLAAH(1X)\n    \"AKU BERSAKSI, BAHWA TIADA TUHAN YANG WAJIB DI SEMBAH SELAIN ALLAH\"\n\n";
    cout << "  3. ASYHADU ANNA MUHAMMADAR RASUULULLAAH(1X)\n    \"AKU BERSAKSI, BAHWA NABI MUHAMMAD ADALAH UTUSAN ALLAH\"\n\n";
    cout << "  4. HAYYA'ALASH SHALAAH(1X)\n    \"MARILAH SALAT\"\n\n";
    cout << "  5. HAYYA'ALL FALAAH(1X)\n    \"MARILAH MENCAPAI KEMENANGAN\"\n\n";
    cout << "  6. ALLAHU AKBAR ALLAHU AKBAR(1X)\n    \"ALLAH MAHA BESAR\"\n\n";
    cout << "  7. LAA ILAAHAILLALLAAH(1X)\n    \"TIADA TUHAN SELAIN ALLAH\"\n\n";

    //tutup azan dan iqamah
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan if tutup azan dan iqamah
    if (pilih==1){menuUtama();}
    else if (pilih==2) {tutupProgram();}
    else {azanIqamah();}
}

//fungsi zakat
void Zakat(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=ZAKAT=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t---=PENJELASAN ZAKAT=---\n";
    cout << "==============================================================================================" << endl << endl;
    cout << " PENGERTIAN ZAKAT\n\n";
    cout << " SECARA BAHASA\n";
    cout << " ZAKAT DIARTIKAN BERSIH, TUMBUH, DAN BERKEMBANG.\n\n";
    cout << " SECARA ISTILAH\n";
    cout << " ZAKAT ADALAH MENGELUARKAN SEBAGIAN HARTA DENGAN JUMLAH TERTENTU SERTA DISERAHKAN KEPADA ORANG\n";
    cout << " YANG BERHAK\n\n";
    cout << " ZAKAT HUKUMNYA WAJIB. HAL INI, ALLAH PERINTAHKAN MELALUI FIRMAN-NYA :\n";
    cout << " QS. AL-BAQARAH AYAT 43\n";
    cout << " \"DAN DIRIKANLAH SALAT DAN TUNAIKANLAH ZAKAT!\"\n\n";
    cout << " QS. AT-TAUBAH AYAT 103\n";
    cout << " \"AMBILLAH ZAKAT DARI HARTA MEREKA GUNA MEMBERSIHKAN DAN MENYUCIKAN MEREKA.\"\n\n";
    cout << " PEMBAGIAN ZAKAT\n\n";
    cout << " 1. ZAKAT FITRAH(DIRI)\n";
    cout << " PENGERTIAN\n";
    cout << " ZAKAT FITRAH ADALAH ZAKAT YANG DIKELUARKAN BERUPA MAKANAN POKOK DARI SETIAP INDIVIDU DI BULAN\n";
    cout << " RAMADAN.\n\n";
    cout << " SYARAT ZAKAT FITRAH\n";
    cout << " 1. ISLAM\n";
    cout << " 2. ADA KELEBIHAN HARTA UNTUK KEBUTUHAN POKOK PADA MALAM HARI RAYA DAN SIANGNYA\n";
    cout << " 3. MENDAPATI BAGIAN AWAL SAMPAI AKHIR RAMADAN WALAU SEBENTAR\n\n";
    cout << " WAKTU\n";
    cout << " DARI AWAL RAMADAN SAMPAI SEBELUM SELESAI SALAT IDUL FITRI\n\n";
    cout << " UKURAN\n";
    cout << " 1 SHA' = 4 MUD ATAU SEKITAR 2,5 KG\n\n";
    cout << " 2. ZAKAT MAL(HARTA)\n";
    cout << " PENGERTIAN\n";
    cout << " ZAKAT YANG HARUS DIKELUARKAN ATAS KEPEMILIKAN HARTA APABILA TELAH MENCAPAI NISHAB DAN HAUL.\n\n";
    cout << " SYARAT ZAKAT MAL\n";
    cout << " 1. HAK MILIK SEMPURNA\n";
    cout << " 2. HARTANYA BERKEMBANG (BERTAMBAH NILAI)\n";
    cout << " 3. MENCAPAI NISHAB (BATAS MINIMAL)\n";
    cout << " 4. HAUL (GENAP SATU TAHUN)\n\n";
    cout << " JENIS HARTA YANG WAJID DIZAKATI";
    cout << " 1. PERNIAGAAN\n";
    cout << " 2. PERTANIAN\n";
    cout << " 3. PETERNAKAN\n";
    cout << " 4. PERTAMBANGAN\n";
    cout << " 5. PROFESI\n";
    cout << " 6. RIKAZ\n\n";
    cout << " KETENTUAN-KETENTUAN ZAKAT MAL\n";
    cout << " |----------------------------------------------------------------------------------|\n";
    cout << " | HARTA\t| NISHAB\t\t   | WAKTU\t | KADAR \t\t    |\n";
    cout << " |----------------------------------------------------------------------------------|\n";
    cout << " | NIAGA        | SENILAI EMAS 85G         | 1 TAHUN     | 2,5%                     |\n";
    cout << " | UNTA         | 5 EKOR                   | 1 TAHUN     | 1 DOMBA                  |\n";
    cout << " | SAPI         | 30 EKOR                  | 1 TAHUN     | 1 SAPI (1 TAHUN)         |\n";
    cout << " | KAMBING      | 40 EKOR                  | 1 TAHUN     | 1 DOMBA                  |\n";
    cout << " | AYAM/IKAN/DLL| SENILAI EMAS 85G         | 1 TAHUN     | 2,5%                     |\n";
    cout << " | PERTANIAN    | 1,4 TON (BERKULIT)       | PANEN       | 5% (PENGAIRAN BAYAR)     |\n";
    cout << " | PERTANIAN    | 0,7 TON (TIDAK BERKULIT) | PANEN       | 10% (PENGAIRAN GRATIS)   |\n";
    cout << " | EMAS         | 85G                      | 1 TAHUN     | 2,5%                     |\n";
    cout << " | PERAK        | 595G                     | 1 TAHUN     | 2,5%                     |\n";
    cout << " | PROFESI      | SENILAI EMAS 85G         | 1 TAHUN     | 2,5%                     |\n";
    cout << " | RIKAZ        | TANPA NISHAB             | DITEMUKAN   | 20%                      |\n";
    cout << " |----------------------------------------------------------------------------------|\n\n";
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA, ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan switch pilihan
    switch(pilih){
    case 1:menuUtama();break;
    case 2:tutupProgram();break;
    default :Zakat();break;
    }
}

//fungsi tentang program
void tentangProgram(){
    system("CLS");
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t  ---=TENTANG PROGRAM=---\n";
    cout << "==============================================================================================" << endl;
    cout << "\t\t\t\t----=PENJELASAN PROGRAM=---\n\n";
    cout << " [1] APA ITU MUSLIM PRO?\n\n";
    cout << "  MUSLIM PRO ADALAH SEBUAH PROGRAM YANG MIRIP DENGAN APLIKASI-APLIKASI PEMBANTU SEORANG MUSLIM\n";
    cout << " ATAU MUSLIMAH DALAM MELAKSANAKAN IBADAHNYA KEPADA ALLAH SWT DENGAN CARA MENYEDIAKAN ILMU-ILMU\n";
    cout << " YANG BERHUBUNGAN DENGAN BERIBADAH KEPADA ALLAH SWT. PROGRAM MUSLIM PRO HANYALAH SEBUAH CONTOH\n";
    cout << " PROGRAM SEDERHANA DARI APLIKASI-APLIKASI YANG DI JELASKAN TADI.\n\n";
    cout << " [2] PEMBUAT PROGRAM\n\n";
    cout << "  PROGRAM MUSLIM PRO INI DIBUAT OLEH DANI AKHMAD MAULANA YANG MERUPAKAN SEORANG MAHASISWA DARI\n";
    cout << " UNIVERSITAS MUHAMMADIYAH SUKABUMI DAN MENGAMBIL JURUSAN TEKNIK INFORMATIKA SEBAGAI MODAL MASA\n";
    cout << " DEPANNYA NANTI.\n\n";
    cout << " [3] TUJUAN PROGRAM\n\n";
    cout << "  PROGRAM MUSLIM PRO DIBUAT DENGAN TUJUAN UNTUK MEMENUHI TUGAS UJIAN AKHIR SEMESTER (UAS) YANG\n";
    cout << " AKAN DILAKSANAKAN PADA AWAL BULAN FEBRUARI 2023. TERIMAKASIH KEPADA SEMUA YANG TELAH MEMBANTU\n";
    cout << " SAYA DALAM MENYELESAIKAN TUGAS UAS INI, SEMOGA ALLAH SWT MEMBERIKAN KALIAN SEMUA BALASAN YANG\n";
    cout << " LEBIH BAIK DARI APA YANG KALIAN BERI, AAMIIN.\n\n";

    //tutup tentang program
    cout << "==============================================================================================" << endl;
    cout << " INGIN PERGI KE MENU UTAMA ATAU TUTUP PROGRAM?\n";
    cout << " [1] KE MENU UTAMA?\n";
    cout << " [2] TUTUP PROGRAM?\n";
    cout << "==============================================================================================" << endl;
    cout << " SILAHKAN PILIH DAN MASUKKAN KODE PILIHAN DI SEBELAH SINI (1/2) : "; cin >> pilih;

    //percabangan switch
    switch (pilih){
    case 1: menuUtama(); break;
    case 2: tutupProgram(); break;
    default : tentangProgram(); break;
    }

}

//fungsi tutup program
void tutupProgram(){
    cout << "==============================================================================================" << endl;
    cout << " OK PROGRAM SELESAI SAMPAI SINI, TERIMA KASIH BANYAK! :) \n";
    cout << "==============================================================================================" << endl;
}
