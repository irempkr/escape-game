#include <stdio.h>
#include <unistd.h> // usleep fonksiyonu için
#include <string.h>

void daktilo(const char *text, int bekleme){  //yazıya daktilo efekti veriyor
    while (*text) {
        putchar(*text++);
        fflush(stdout);
        usleep(bekleme);
    }
}

void temizle() {// Giriş tamponunu temizler
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void negatifi_cevir(int *deger) { //Nurseza Karakaya
    if (*deger < 0) //eger deger eksiye inerse bu fonksiyonla otomatik olarak 0'a ceviriyorum
        *deger = 0;
}

void hikaye(char *ozanAdi){ //NURSEZA KARAKAYA
    daktilo("\n", 50000);
    daktilo(ozanAdi, 50000);
    daktilo("(siz), ikiz kardesi ile kucuk bir koyde buyumustur.\n", 50000);
    daktilo("Birbirlerine sikica bagli olan bu kardeslerin hayati, bir kis gunu koylerine gelen gizemli bir gezginle degisir.\n", 50000);
    sleep(1);
    daktilo("Gizemli Gezgin, koy halkini yakinlarindaki orman hakkinda buyuleyici hikayeler ve efsanelerle etkiler.\n", 50000);
    daktilo("\nBu efsaneler, ikizinizin ormana karsi olan ilgisini artirir ve onu ormana gidip kesfetme arzusu ile doldurur.\n", 50000);
    daktilo("Daha once koyden kimse bunu yapmaya cesaret edememistir.", 50000);
    sleep(1);
    daktilo("\nGezginin anlattigi efsaneleri dogrulamak adina sizi de bu maceraya katilmaya zorlar.\n", 50000);
    sleep(1);
    daktilo("Ancak, ", 50000);
    daktilo(ozanAdi, 50000);
    daktilo(" bu gezgine guvenmedigini ve onun hakkinda icinde pek hos olmayan hisler oldugunu itiraf eder.\n", 50000);
    sleep(1);
    daktilo("Kardesini koyde kalip huzurlu bir hayat surmeye ikna etmeye calisir, ancak bu konusma siddetli bir tartismaya donusur.", 50000);
    daktilo("\nKavga sirasinda kardesiniz sinirle koyden ayrilir ve tek basina karanlik ormana dogru kaybolur.\n", 50000);
    sleep(2);
    daktilo("\nVe bir daha da donmez...\n", 50000);
    sleep(2);
    daktilo("\n", 50000);
    daktilo(ozanAdi, 50000);
    daktilo(", kardesinin ayrilisinin ardindan gunlerce onu bekler, ancak ormandan hicbir iz gelmez.\n", 50000);
    daktilo("Koy halki zamanla kardesinin kaybolusunu kabullenmeye baslasa da, ozanin ici bir turlu rahat etmez.\n", 50000);
    daktilo("Kardesinden hicbir ses seda olmamasi onu huzursuz eder.\n", 50000);
    daktilo("Her gece, ormanin derinliklerinden duydugu hayal mi gercek mi oldugunu bilmedigi fisiltilar ve yankilar onu uyandirip durur.\n\n", 50000);
    sleep(1);
    daktilo(ozanAdi, 50000);
    daktilo(", ormanin dusunduklerinden daha tehlikeli oldugunu ve kardesinin Gezgin tarafindan kandirildigini anlar.\n", 50000);
    sleep(1);
    daktilo("En sonunda, daha fazla dayanamaz ve kardesini bulmak adina, eline calgisini alarak ufak macerasina atilir...\n", 50000);
    sleep(2);
}

void ending(char *ozanAdi){ // NURSEZA KARAKAYA
    sleep(3);
    printf("\n\n");
    daktilo(ozanAdi, 50000);
    daktilo(" fisiltilari takip ederek ormanin derinliklerine dogru ilerler.\n", 50000);
    sleep(2);
    daktilo("Nihayet, ormanin kalbindeki devasa bir acikliga ulasir. \n", 50000);
    daktilo("Acikligin tam ortasinda ise, kardesini bir agacin koklerine dolanmis halde bulur.\n", 50000);
    sleep(1);
    printf("\n");
    daktilo(ozanAdi, 50000);
    daktilo(", kardesine seslenip ona dogru kosmaya baslar. Ama cubbeli bir figur agac ile ozanin arasina girerek onu durdurur.\n", 50000);
    daktilo("Figur, Gezginin ta kendisidir. Masum olmayan bir gulumseme ile ozani karsilar.\n", 50000);
    sleep(1);
    daktilo("\n\“Demek sonunda cagrilarin kaynagini bulabildin... Tebrik ederim, Ozan! Maceranin tamamlanmasina sadece son bir adim kaldi.\”\n", 50000);
    sleep(2);
    printf("\n");
    daktilo(ozanAdi, 50000);
    daktilo(" ofkeyle cikisir:\n", 50000);
    daktilo("\n\“Sonunda onu buldum. Artik bizi rahat birak! Sadece onu guvenle tekrar eve goturmek istiyorum!\”\n", 50000);
    sleep(2);
    daktilo("\nGezgin hicbir sey demez. Sonra ufak bir kahkaha atar.\n", 50000);
    sleep(1);
    daktilo("\n\“Iste o biraz zor.\”\n", 50000);
    sleep(2);
    printf("\n");
    daktilo(ozanAdi, 50000);
    daktilo(" yavas adimlarla agaca bagli olan kardesine dogru yaklasir.\n", 50000);
    daktilo("Kardesin bilinci kapali... Ama hala nefes aliyordur.\n", 50000);
    sleep(1);
    daktilo("\n\“Kardesin hala yasiyor. Yani, simdilik...\”\n", 50000);
    sleep(1);
    daktilo("\n\“Kimsin sen...\”\n", 50000);
    sleep(1);
    daktilo("Gezgin siritir\n", 50000);
    daktilo("\n\“Sonunda sormana sevindim.\”\n", 50000);
    daktilo("\nGezgin kollarini havaya acar. \n", 50000);
    daktilo("Esen siddetli ruzgar yerdeki yapraklari savurur, agaclari dans ettirir, Gezgin’in cubbesini acar. \n", 50000);
    daktilo("Ozan savrulmamaya calisirken ayni zamanda gordukleri karsisinda sok olmustur.\n", 50000);
    daktilo("\nGezginin yuzu yari curumus bedeni sarmasik ve dallarla kaplanirken buharlasir. Ve tamamen ormanla bir olur.\n", 50000);
    daktilo("Gezginin sadece yuksek sesi ormanda yankilanir:\n", 50000);
    daktilo("\n\“Ben, ormanin ruhuyum..\”\n", 100000);
    sleep(2);
    daktilo("\nIlik bir ruzgar ozanin saclarini savurur.\n", 50000);
    daktilo("\n\“Ben... Ben, anlayamiyorum...\”\n", 100000);
    daktilo("\n\“Her ruh, bu ormana geldiginde bir bedel oder. Kardesin tuzagima dusup bu ormana geldi. Ve sonucunda ruhu bu ormani besleyecek.\”\n", 100000);
    sleep(1);
    daktilo("\n\“Ormani besleyen her ruh, ormani daha da canli tutar. Bunu doganin dongusu gibi de dusunebilirsin.\”\n", 100000);
    sleep(1);
    daktilo("\nOzanin bacaklari tutmaz ve yere coker.\n", 50000);
    daktilo("\n\“Lutfen... Lutfen onu birak.\”\n", 100000);
    sleep(1);
    daktilo("\n\“Kardesini istiyorsan, onun ruhunu serbest birakacak bir baska ruh gerek. Baska turlu onu bagli oldugu bu agactan sokemezsin.\”\n", 50000);
    daktilo("\nBir sure sessizlik olur.\n", 50000);
    sleep(2);
    daktilo("\n\“O halde sana bir teklifim var.\”\n", 50000);
    sleep(1);
    daktilo("\nOzanin bacagini ufak bir sarmasik sarmalar ve hancerini alip ozanin ellerine birakir.\n", 50000);
    daktilo("\n\“Kardesini bu koklerden koparmak istiyorsan, onun ruhunun yerini doldurmalisin. Ve ben de sana simdi iki secenek sunuyorum:\”\n", 50000);
    sleep(1);
    daktilo("\n\“Ya bu hancerle kardesinin bedenini oldurup ruhunu ormana akitirsin..\”\n", 200000);
    sleep(1);
    daktilo("\n\“..Ya da hanceri kendi kalbine saplayip kendi ruhunu feda ederek kardesini ozgurlestirirsin.\”\n", 200000);
    sleep(3);
    daktilo("\nOzanin gozleri korku ve saskinlikla parlar. Agaca bagli vaziyetteki kardesi ise hala hareketsiz bir sekilde beklemektedir. Ormanin kokleri onu sikica kavramistir.\n", 50000);
    daktilo(ozanAdi, 50000);
    daktilo(", bir karar vermek zorundadir.\n", 50000);
    sleep(2);
    daktilo("\n\“Ne dersin..?\”\n", 200000);
    sleep(2);
    daktilo("1- Kendini feda et.\n", 50000);
    daktilo("2- Kardesini feda et.\n", 50000);

    int secim;
    scanf("%d", &secim);

    if (secim == 1) {
        printf("\n");
        daktilo(ozanAdi, 50000);
        daktilo(", hanceri kalbine dogrultur ve gozleri kardesine kenetlenir.\n", 50000);
        daktilo("Hanceri kendine saplar ve aninda hayati Ormana akar. Gozlerinin onunden gecmisi, muzikle dolu anilari hizla gecerken bir huzur hissi kaplar icini.\n", 50000);
        sleep(2);
        daktilo("Orman, ozanin ruhunu icine alir ve son bir sarkiyla onu ugurlar. Ozan, sonsuza dek Ormanin bir parcasi olur ve melodileri ormanda yankilanir...\n", 100000);
        sleep(2);
        daktilo("Kardesi ise koye doner, ama ormanin kenarinda her gece duydugu o melodiyle yasamak zorunda kalir: ozanin sarkisi, ruhunu feda ettigi yerden ona seslenmeye devam eder.\n", 50000);
        sleep(2);
        daktilo("\nS O N.\n", 200000);
        printf("\n\n(Cikmak icin herhangi bir tusa basin.)\n");
        getch();
        exit(0);
    }
    else {
        printf("\n");
        daktilo(ozanAdi, 50000);
        daktilo(", kardesine dogru yurur ve hanceri kaldirir. Agır bir nefes alir ve gozyaslarini tutamaz.\n", 50000);
        sleep(1);
        daktilo("\n\“Ozur dilerim… Ama yasamak icin baska secenegim yok. Ve ben yasamak istiyorum..\”\n", 100000);
        sleep(2);
        daktilo("\nBu dusunceyle kardesinin kalbine hanceri saplar. Kardesinin gozleri acilir, icinde hem saskinlik hem de bir kirginlik pariltisi vardir.\n", 50000);
        daktilo("Ancak o an, kardesinin vucudu yavasca koklere karısır ve tamamen Orman’in bir parcası olur.\n", 50000);
        daktilo("\n\“Ne kadar ilginc bir secim. Simdi yasamaya devam et... ama unutma, ruhunun karanlıgı bir gun elbet seni bulacak.\”\n", 50000);
        sleep(1);
        daktilo("\nOzan, koyune geri doner. Ancak icinde hep bir sucluluk ve kayip duygusu hisseder. Ormanin, onun fisiltilari artik hep kulaklarindadir.\n", 50000);
        sleep(1);
        daktilo("Kardesini kurtarmak icin her seyi yapabilecegini dusunurken, aslinda ruhunu daha derin bir karanlıga hapsetmistir.\n", 100000);
        sleep(2);
        daktilo("\nS O N.\n", 200000);
        printf("\n\n(Cikmak icin herhangi bir tusa basin.)\n");
        getch();
        exit(0);
    }

}

void check(int *can, int *uyku, int *tokluk, int *hijyen, int *karizma, char *ozanAdi, int *seviye_puani, int *seviye, int *guc,int *ceviklik,int *dayaniklilik,int *toplayicilik){ //Nurseza Karakaya
    negatifi_cevir(uyku);
    negatifi_cevir(tokluk);

    if(*tokluk>=100)
        *tokluk=100;

    if(*hijyen<0)
        *hijyen=0;

    if(*can>100)
        *can=100;

    if (*uyku == 0){
        *can -= 10;
        daktilo("\a\nUykusuz oldugunuzdan caniniz azaldi!\n", 50000);
    }
    if (*tokluk == 0){
        *can -= 20;
        daktilo("\a\nAcliktan caniniz azaldi!\n", 50000);
    }

    if(*can<=0){
        daktilo("\n\aO\a l\a d\a u\a n\a u\a z. . .\n", 100000);

        printf("  _____\n");
        printf(" /     \\\n");
        printf("| () () |\n");
        printf(" \\  ^  /\n");
        printf("  |||||\n");
        printf("  |||||\n");
        sleep(1);

        daktilo("\nUfak maceramiz..\n", 100000);
        sleep(1);
        daktilo("       ..buraya kadarmis...\n", 100000);
        sleep(2);
        daktilo("Azimli ol, ", 100000);
        daktilo(ozanAdi, 100000);
        daktilo(".", 100000);
        sleep(1);

        printf("\n\n(Cikmak icin herhangi bir tusa basin.)\n");
        getch();
        exit (0);
    }
    seviyehesap(seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik, ozanAdi);

    if (*hijyen <= 20){
        *karizma -= 3;
        daktilo("\a\nOrtalikta pis dolastiginizdan karizmaniz azaldi!\n", 50000);
        negatifi_cevir(karizma);
    }
}

void seviyehesap(int *seviye_puani, int *seviye,int *guc,int *ceviklik,int *dayaniklilik,int *toplayicilik, char *ozanAdi){ //Nurseza Karakaya
    if (*seviye_puani>=100){
            while (*seviye_puani >= 100) {
            *seviye+=1;
            *seviye_puani-=100;
            *guc+=2;
            *ceviklik+=2;
            *dayaniklilik+=2;
            *toplayicilik+=2;
            daktilo("\a\nSEVIYE ATLADINIZ!\n", 50000);

            if (*seviye==11)
                ending(ozanAdi);
            }
    }
}

void sifali_bitki_topla_ve_avlan(int toplayicilik, int*can,int *tokluk,int *seviye_puani) {//Irem Rana Peker
    int secim;
    float sifali_bitki_bulma_sansi= (toplayicilik*4.0)/100.0;

   printf("\n1.sifali bitki topla\n");
   printf("2. meyve topla\n");
   printf("3.hayvan avla\n");
   scanf("%d",&secim);
   if(secim==1){
   if(sifali_bitki_bulma_sansi<(1.0/5.0)){
   printf("sifali bitki bulamadiniz.");
   }
    else{
    *can+=10;
    printf("sifali bitki topladiniz.");
    *seviye_puani+=20;
   }
          }
          if(secim==2){
        if(sifali_bitki_bulma_sansi<(1.0/5.0))
        printf(" meyve toplayamadiniz.");
        else {
       tokluk+=10;
       printf("meyve topladiniz.");
        *seviye_puani+=20;

       }
       }
    if(secim==3){
             if(sifali_bitki_bulma_sansi<(2.0/5.0))
   printf(" hayvan avlayamadiniz");
   else {
    seviye_puani+=50;
    tokluk+=30;
    printf("hayvan avladiniz.");
        *seviye_puani+=30;

   }
    }
    }

void ormani_kesfet(int *uyku, int *ceviklik, int *can, int *guc, char *ozanAdi, int *tokluk, int *dayaniklilik, int *hijyen, int *karizma, int *seviye_puani, int *seviye, int *para,int *toplayicilik) { //Nurseza Karakaya
    srand(time(NULL));

    daktilo("\nOrmana dogru adim atiyorsunuz. Etraf oldukca sessiz ve urpertici...\n", 50000);
    sleep(1);
    daktilo("Agaclarin arasinda gozler gibi parlayan isiklar, yankilanan kahkahalar ve her adiminda sanki daha da agirlasan bir hava...", 50000);
    sleep(2);
    printf("\a\nOrmanin karanlik ve bogucu havasi enerjinizi dusuruyor.");
    *uyku-=10;
    sleep(2);
    daktilo("\nAniden yaninizdaki calilardan garip bir yaratik uzerinize firliyor!\n", 50000);
    sleep(1);
    if(*ceviklik<=5){
        *can-=10;
        printf("\nMaalesef bu ani saldiridan siyrilamiyorsunuz ve yaratik size 10 hasar veriyor.\n");
    }
    else{
        printf("\nBu ani saldirisindan basariyla siyriliyorsunuz ve hasar almadan nemli topragin uzerine dusuyorsunuz.\n");
    }
    daktilo("Hemen hemen sizin boyutunuzda olan korkunc yaratigin gozleri parliyor ve saldirisina hazirlaniyor..\n", 50000);

    int dusman_guc = rand() % 4 + 7;       // 7-10 (zor)
    int dusman_ceviklik = rand() % 4 + 7;
    int dusman_dayaniklilik = rand() % 4 + 7;
    int dusman_can = rand() % 4 + 50; //50-53 arasi can

    printf("\nDusmanin ozellikleri:\n");
    printf("Guc: %d\nCeviklik: %d\nDayaniklilik: %d\nCan: %d\n", dusman_guc, dusman_ceviklik, dusman_dayaniklilik, dusman_can);
    printf("1. Savas\n2. Kac\n");
    int secim;
    scanf("%d", &secim);

    if (secim == 2) {
        int kacma_sansi = (4 * *ceviklik) / 100;
        if (kacma_sansi> (1/5)) {
            printf("\nKacmayi basardiniz...\n");
            *uyku-=20;
            *tokluk-=10;
            return;
        }
         else {
            printf("\nKacamadiniz! Dusman sizi yakaliyor ve savasmak zorunda kaliyorsunuz!\n");
        }
    }
    daktilo("\nSavas basliyor!\n", 50000);

       int ozan_baslar;
    if (*ceviklik > dusman_ceviklik) {
        ozan_baslar = 1;
        printf("\n%s ilk saldiriyor.\n", ozanAdi);
    }
     else if (*ceviklik < dusman_ceviklik) {
        ozan_baslar = 0;
        printf("\nRakip ilk saldiriyor.\n");
    }
     else {
        ozan_baslar = rand() % 2;
    }

    while (*can > 0 && dusman_can > 0) {
        if (ozan_baslar) {
            int hasar = 4 * (*guc);
            int verilen_hasar = hasar - (hasar * (4 * (dusman_dayaniklilik) /100) -1);
            dusman_can -= verilen_hasar;
            printf("\n%s dusmanina saldirdi ve %d hasar verdi! Dusmanin kalan cani: %d\n", ozanAdi, verilen_hasar, dusman_can);
            ozan_baslar = 0;
        }
        else {
            int hasar = 4 * dusman_guc;
            int alinan_hasar= hasar - (hasar * (4 * (*dayaniklilik) /100) -1);
            *can -= alinan_hasar;
            printf("\nDusman size saldirdi ve %d hasar verdi! Ozanin kalan cani: %d\n", alinan_hasar, *can);
            ozan_baslar = 1;
        }

        if (*can <= 0) {
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);
        }
         else if (dusman_can <= 0) {
            daktilo("\nDusman yenildi!\n", 50000);
            *uyku-=20;
            *tokluk-=30;
            *hijyen-=10;
            *para+=40;
            *seviye_puani+=70;
            daktilo("40 Altin kazandiniz!\n", 50000);
        }
    }
    check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);

    daktilo("\nDurum raporu:\n", 50000);
    printf("Can: %d\n", *can);
    printf("Tokluk: %d\n", *tokluk);
    printf("Uyku: %d\n", *uyku);
    printf("Hijyen: %d\n", *hijyen);
    printf("Guc: %d\n", *guc);
    printf("Ceviklik: %d\n", *ceviklik);
    printf("Dayaniklilik: %d\n", *dayaniklilik);

    int devamsecim;
    daktilo("\nMaceraya devam mi edeceksiniz yoksa koye gidip dinlenmek mi istersiniz.?\n", 50000);
    printf("1-Devam\n2-Koye don\n");
    scanf("%d", &devamsecim);
    while(1){
    if(devamsecim==1)
        break;
    else if(devamsecim==2){
        daktilo("\nKoye donuyorsunuz...\n", 50000);
        sleep(1);
        return;
    }
    else
        if (scanf("%d", &devamsecim) != 1) {
            temizle(); // Giriş tamponunu temizler
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
        }
        else
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
    }


    daktilo("\nOrmanin derinliklerine dogru ilerlemeye devam ediyorsunuz.\n", 50000);
    sleep(1);
    daktilo("Ayni zamanda kardesiniz icin giderek daha da fazla endiselenmeye basliyorsunuz...\n", 50000);
    sleep(1);
    daktilo("Bu korkunc ormanda basina gelmis olabilecekleri dusunurken yakinlarda bir kadin kahkahasi duyuluyor.\n", 50000);
    sleep(1);
    daktilo("Kararli ve hazirlikli bir sekilde elinizdeki hanceri tutuyorsunuz.\n", 50000);
    daktilo("2 metreden uzun ve size dogru yaklasan baska bir yaratikla karsilasiyorsunuz..\n", 50000);
    daktilo("Kadin bir kez daha kulaklari tirmalayan bir kahkaha atiyor.\n", 50000);

    dusman_guc = rand() % 4 + 7;       // 7-10 (zor)
    dusman_ceviklik = rand() % 4 + 7;
    dusman_dayaniklilik = rand() % 4 + 7;
    dusman_can = rand() % 6 + 50; //50-55 arasi can

    printf("\nDusmanin ozellikleri:\n");
    printf("Guc: %d\nCeviklik: %d\nDayaniklilik: %d\nCan: %d\n", dusman_guc, dusman_ceviklik, dusman_dayaniklilik, dusman_can);
    printf("1. Savas\n2. Kac\n");
    scanf("%d", &secim);

    if (secim == 2) {
        int kacma_sansi = (4 * *ceviklik) / 100;
        if (kacma_sansi> (1/5)) {
            printf("\nKacmayi basardiniz...\n");
            *uyku-=20;
            *tokluk-=10;
            return;
        }
         else {
            printf("\nKacamadiniz! Dusman sizi yakaliyor ve savasmak zorunda kaliyorsunuz!\n");
        }
    }
    daktilo("\nSavas basliyor!\n", 50000);

    if (*ceviklik > dusman_ceviklik) {
        ozan_baslar = 1;
        printf("\n%s ilk saldiriyor.\n", ozanAdi);
    }
     else if (*ceviklik < dusman_ceviklik) {
        ozan_baslar = 0;
        printf("\nRakip ilk saldiriyor.\n");
    }
     else {
        ozan_baslar = rand() % 2;
    }

    while (*can > 0 && dusman_can > 0) {
        if (ozan_baslar) {
            int hasar = 4 * (*guc);
            int verilen_hasar = hasar - (hasar * (4 * (dusman_dayaniklilik) /100) -1);
            dusman_can -= verilen_hasar;
            printf("\n%s dusmanina saldirdi ve %d hasar verdi! Dusmanin kalan cani: %d\n", ozanAdi, verilen_hasar, dusman_can);
            ozan_baslar = 0;
        }
        else {
            int hasar = 4 * dusman_guc;
            int alinan_hasar= hasar - (hasar * (4 * (*dayaniklilik) /100) -1);
            *can -= alinan_hasar;
            printf("\nDusman size saldirdi ve %d hasar verdi! Ozanin kalan cani: %d\n", alinan_hasar, *can);
            ozan_baslar = 1;
        }

        if (*can <= 0) {
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);
        }
         else if (dusman_can <= 0) {
            daktilo("\nDusman yenildi!\n", 50000);
            *uyku-=20;
            *tokluk-=30;
            *hijyen-=10;
            *para+=40;
            *seviye_puani+=100;
            daktilo("40 Altin kazandiniz!\n", 50000);
        }
    }
    check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);

    daktilo("\nDurum raporu:\n", 50000);
    printf("Can: %d\n", *can);
    printf("Tokluk: %d\n", *tokluk);
    printf("Uyku: %d\n", *uyku);
    printf("Hijyen: %d\n", *hijyen);
    printf("Guc: %d\n", *guc);
    printf("Ceviklik: %d\n", *ceviklik);
    printf("Dayaniklilik: %d\n", *dayaniklilik);



    daktilo("\nBu maceranin sonuna ozel Cutscene'i atlayacak misiniz?\n", 50000);
    printf("1-Evet, atla!\n2-Hayir, devam.\n");
    scanf("%d", &devamsecim);
    while(1){
    if(devamsecim==1){
        printf("\n Cutscene atlandi.\n");
        *uyku=0;
        *seviye_puani+=30;
        break;
    }
    else if(devamsecim==2){
    daktilo("\nHava kararmaya basliyor... Bir an once koye donmenizin en iyisi olacagini dusunuyorsunuz.\n", 50000);
    sleep(1);
    daktilo("Ama aniden ileride tanidik bir figur goruyorsunuz...\n", 50000);
    daktilo("Bu o gezgin!\n", 50000);
    sleep(1);
    daktilo("\n\"Dur!! Sen!\"\n", 50000);
    sleep(2);
    daktilo("\nGezgin size dogru donuyor. Genis cubbesinden dolayi her zamanki gibi yuzu gorunmuyor.\n", 50000);
    sleep(1);
    daktilo("Gozlerinizi ovusturuyorsunuz. Gordugunuz sey gercek mi yoksa bir halusinasyondan mi ibaret emin degilsiniz..\n", 50000);
    sleep(1);
    daktilo("Birden, belli olmayan yuzune ragmen cubbesinin altindan sinsi sinsi sirittigini goruyorsunuz.\n", 50000);
    daktilo("Aniden Gezgin gozlerinizin onunde kayboluyor!\n", 50000);
    daktilo("Panik ve gerginlikle etrafiniza bakinirken biri kulaginiza fisildiyor:\n", 50000);
    sleep(2);
    printf("\n\"");
    daktilo(ozanAdi, 100000);
    printf(".\" \n");
    sleep(2);
    daktilo("\nIrkilerek yanininizda beliren Gezgin'e donuyorsunuz.\n", 50000);
    sleep(1);
    daktilo("Gezgin siritarak tekrar size fisildiyor. Ama sanki, o fisildadikca ormandaki butun agaclar fisiltiya hep beraber eslik ediyor:\n", 50000);
    daktilo("\n\"Her ruh, bir bedel tasir...\"\n", 50000);
    sleep(1);
    printf("\n");
    daktilo(ozanAdi, 50000);
    daktilo(", ofkeli bir sekilde Gezgin'e dogru atiliyor. Ama gezgine degemeden Gezgin tekrar puf oluyor ve biraz uzakta tekrar beliriyor.\n", 50000);
    daktilo("\n\"Sana basindan beri guvenmemekte hakliydim.. Soyle! Kardesim nerede, ona ne yaptin?!\"\n", 50000);
    sleep(1);
    daktilo("\nGezgin tekrar gozden kayboluyor. Sonra aniden hemen burnunuzun dibinde tekrar beliriyor.\n", 50000);
    daktilo("Korkuyla dengenizi yitirecek gibi oluyorsunuz. Gezgin'in karanlik yuzu yakindan cok daha belirgin..\n", 50000);
    daktilo("Gozleri hala gorunmese de yari curumus cildini gorunce dehsete dusuyorsunuz. Bir miktar kemiklerinin bile gorundugu soylenebilir.\n", 50000);
    sleep(1);
    daktilo("Buyucu son bir kez fisildiyor...\n", 50000);
    daktilo("\n\"Her ruh, bir bedel tasir. Kimi isiga ulasir, kimi ise karanlikta kaybolur...\"\n", 50000);
    daktilo("\n\"Kardesinin ruhu, su anda ikisinin de otesinde bir yerde bekliyor. Ama onun bulundugu yere dokunmak icin once kendi zincirlerini koparman gerek.\"\n", 50000);
    daktilo("\n\"Karanlik kolayca geri odeme istemez...\"\n", 100000);
    sleep(2);
    daktilo("\nGizemli Gezgin, kemikimsi elini alniniza dogru tutuyor ve elinden beyaz bir isik huzmesi cikiyor.\n", 50000);
    sleep(1);
    daktilo("\n\"Simdi biraz dinlen, yorgun ruh. Ve uykuya dal.\"\n", 100000);
    sleep(2);
    daktilo("\nAniden kolunuzu bile kipirdatamayacak kadar yorgun hissediyorsunuz.\n", 50000);
    daktilo("Gozleriniz karardi ve yere yigildiniz..\n", 50000);
    *uyku=0;
    *seviye_puani+=30;
    return;
    }
    else
        if (scanf("%d", &devamsecim) != 1) {
            temizle(); // Giriş tamponunu temizler
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
        }
        else
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
    }
}

void kayaliklari_kesfet(int *uyku, int *ceviklik, int *can, int *guc, char *ozanAdi, int *tokluk, int *dayaniklilik, int *hijyen, int *karizma, int *seviye_puani, int *seviye, int *para, int *toplayicilik) { //İREM RANA PEKER
    srand(time(NULL));
    daktilo("\nKayaliklara dogru zorlu bir yolculuga cikiyorsunuz...\n", 50000);
    sleep(1);
      daktilo("\nAniden yaninizdaki kayaliklarin arkasindan garip bir haydut uzerinize dogru harekete geciyor!!!\n", 50000);
    sleep(1);
     if(*ceviklik<=5){
        *can-=10;
    printf("\nMaalesef bu ani saldiridan kurtulamiyorsunuz ve haydut size 5 hasar veriyor.\n");
    *uyku-=5;
    *can-=5;
    *tokluk-=5;

   }
   else {
    printf("\nHaydutun bu ani saldirisindan basariyla siyriliyorsunuz ve hasar almadan kayaliklarin uzerine dogru dusuyorsunuz.\n");
        }
    daktilo("Sizi zorlayan bu korkutucu haydutun  gozlerine baktiginizda sizi oldurmek istedigini anliyorsunuz ve saldirisina hazirlaniyor..\n", 50000);

    int dusman_guc = rand() % 3 + 4;
    int dusman_ceviklik = rand() % 3 + 4;
    int dusman_dayaniklilik = rand() % 3 + 4;
    int dusman_can = rand() % 6 + 20; //20-25 arasi can

    printf("\nHaydutun ozellikleri:\n");
    printf("Guc: %d\nCeviklik: %d\n", dusman_guc, dusman_ceviklik);
    printf("Dayaniklilik: %d\n", dusman_dayaniklilik);
    printf("Ceviklik:%d\n",dusman_ceviklik);
    printf("Can: %d\n", dusman_can);
    printf("1. Savas\n");
    printf("2. Kac\n");
    int secim;
    scanf("%d", &secim);

    if (secim == 2) {
        int kacma_sansi = (4 *( *ceviklik)) / 100;
        if (kacma_sansi> (1/5)) {
            printf("\nKacmayi basardiniz...\n");
            *uyku-=3;
            *tokluk-=3;
            return;
        }
        else {
            printf("\nKacamadiniz! Haydut sizi yakaliyor ve savasmak zorundasiniz!!!\n");
        }
    }
    daktilo("\nSavas basliyor!\n", 50000);

       int ozan_baslar;
    if (*ceviklik > dusman_ceviklik) {
        ozan_baslar = 1;
        printf("\n%s ilk saldiriyor.\n", ozanAdi);
    }
    else if (*ceviklik < dusman_ceviklik) {
        ozan_baslar = 0;
        printf("\nHaydut ilk saldiriyor.\n");
    }
    else {
        ozan_baslar = rand() % 2;
    }

    while (*can > 0 && dusman_can > 0) {
        if (ozan_baslar) {
            int hasar = 4 * (*guc);
            int verilen_hasar = hasar - (hasar * (4 * (dusman_dayaniklilik) /100) -1);
            dusman_can -= verilen_hasar;
            printf("\n%s hayduta saldirdi ve %d hasar verdi! Haydutun kalan cani: %d\n", ozanAdi, verilen_hasar, dusman_can);
            ozan_baslar = 0;
        }
        else {
            int hasar = 4 * dusman_guc;
            int alinan_hasar= hasar - (hasar * (4 * (*dayaniklilik) /100) -1);
            *can -= alinan_hasar;
            printf("\nHaydut size saldirdi ve %d hasar verdi! Ozanin kalan cani: %d\n", alinan_hasar, *can);
            ozan_baslar = 1;
        }

        if (*can <= 0) {
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);
        }
         else if (dusman_can <= 0) {
            daktilo("\nHaydutun dayanikliligi tukendi... Haydut yenildi.\n", 50000);
            *uyku-=10;
            *tokluk-=10;
            *para+=20;
            *seviye_puani+=40;
            *hijyen-=10;
            daktilo("20 Altin kazandiniz!\n", 50000);
        }
    }
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);

    daktilo("\nDurum raporu:\n", 50000);
    printf("Can: %d\n", *can);
    printf("Tokluk: %d\n", *tokluk);
    printf("Uyku: %d\n", *uyku);
    printf("Hijyen: %d\n", *hijyen);
    printf("Guc: %d\n", *guc);
    printf("Ceviklik: %d\n", *ceviklik);
    printf("Dayaniklilik:%d\n",*dayaniklilik);

    int devamsecim;
    daktilo("\nMaceraya devam mi edeceksiniz yoksa koye gidip dinlenmek mi istersiniz.?\n", 50000);
    printf("1-Devam\n");
    printf("2-koye don");
    scanf("%d", &devamsecim);
    while(1){
    if(devamsecim==1)
        break;
    else if(devamsecim==2){
        daktilo("\nKoye donuyorsunuz...\n", 50000);
        sleep(1);
        return;
    }
    else
        if (scanf("%d", &devamsecim) != 1) {
            temizle(); // Giriş tamponunu temizler
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
        }
        else
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
    }


    daktilo("\nKayaliklara dogru gitmeye devam ediyorsunuz.\n", 50000);
    dusman_guc = rand() % 3 + 4;
    dusman_ceviklik = rand() % 3 + 7;
    dusman_dayaniklilik = rand() % 3 + 4;
    dusman_can = rand() % 6 + 20; //20-25 arasi can

    printf("\nHaydutun ozellikleri:\n");
    printf("Guc: %d\nCeviklik: %d\n", dusman_guc, dusman_ceviklik);
    printf("Dayaniklilik: %d\n", dusman_dayaniklilik);
    printf("Ceviklik:%d\n",dusman_ceviklik);
    printf("Can: %d\n", dusman_can);
    printf("1. Savas\n");
    printf("2. Kac\n");
    scanf("%d", &secim);

    if (secim == 2) {
        int kacma_sansi = (4 *( *ceviklik)) / 100;
        if (kacma_sansi> (1/5)) {
            printf("\nKacmayi basardiniz...\n");
            *uyku-=3;
            *tokluk-=3;
            return;
        }
        else {
            printf("\nKacamadiniz! Haydut sizi yakaliyor ve savasmak zorundasiniz!!!\n");
        }
    }
    daktilo("\nSavas basliyor!\n", 50000);

    if (*ceviklik > dusman_ceviklik) {
        ozan_baslar = 1;
        printf("\n%s ilk saldiriyor.\n", ozanAdi);
    }
    else if (*ceviklik < dusman_ceviklik) {
        ozan_baslar = 0;
        printf("\nHaydut ilk saldiriyor.\n");
    }
    else {
        ozan_baslar = rand() % 2;
    }
    while (*can > 0 && dusman_can > 0) {
        if (ozan_baslar) {
            int hasar = 4 * (*guc);
            int verilen_hasar = hasar - (hasar * (4 * (dusman_dayaniklilik) /100) -1);
            dusman_can -= verilen_hasar;
            printf("\n%s hayduta saldirdi ve %d hasar verdi! Haydutun kalan cani: %d\n", ozanAdi, verilen_hasar, dusman_can);
            ozan_baslar = 0;
        }
        else {
            int hasar = 4 * dusman_guc;
            int alinan_hasar= hasar - (hasar * (4 * (*dayaniklilik) /100) -1);
            *can -= alinan_hasar;
            printf("\nHaydut size saldirdi ve %d hasar verdi! Ozanin kalan cani: %d\n", alinan_hasar, *can);
            ozan_baslar = 1;
        }

        if (*can <= 0) {
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);
        }
         else if (dusman_can <= 0) {
            daktilo("\nHaydutun dayanikliligi tukendi... Haydut yenildi.\n", 50000);
            *uyku-=10;
            *tokluk-=10;
            *para+=20;
            *seviye_puani+=40;
            *hijyen-=10;
            daktilo("20 Altin kazandiniz!\n", 50000);
        }
    }
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);

    daktilo("\nDurum raporu:\n", 50000);
    printf("Can: %d\n", *can);
    printf("Tokluk: %d\n", *tokluk);
    printf("Uyku: %d\n", *uyku);
    printf("Hijyen: %d\n", *hijyen);
    printf("Guc: %d\n", *guc);
    printf("Ceviklik: %d\n", *ceviklik);
    printf("Dayaniklilik:%d\n",*dayaniklilik);
}

void vadiyi_kesfet(int *uyku, int *ceviklik, int *can, int *guc, char *ozanAdi, int *tokluk, int *dayaniklilik, int *hijyen, int *karizma, int *seviye_puani, int *seviye, int *para, int *toplayicilik) { //IREM RANA PEKER
    srand(time(NULL));
    daktilo("\nVadinin tehlikeli yollarinda ilerliyorsunuz. Karni ac aslan sesleri duyuyorsunuz...\n", 50000);
    sleep(1);
    if(*ceviklik<=5){
        *can-=3;
    daktilo("\nMaalesef bu ani saldiridan siyrilamiyorsunuz ve aslan size 3 hasar veriyor.\n",50000);

    *uyku-=3;
    *can-=3;
    *tokluk-=3;

   }
    else{
        printf("\nBu ani saldirisindan basariyla siyriliyorsunuz ve hasar almadan yurudugunuz yolun uzerine dusuyorsunuz.\n");

    daktilo("Hemen hemen sizin boyutunuzda olan korkutucu aslanin gozleri parliyor ve saldirisina hazirlaniyor..\n", 50000);
    }
    int dusman_guc = rand() % 3 + 1;
    int dusman_ceviklik = rand() % 3 + 1;
    int dusman_dayaniklilik = rand() % 3 + 1;
    int dusman_can = rand() % 6 + 10; //10-15 arasi can

    printf("\nDusmanin ozellikleri:\n");
    printf("Guc: %d\n",dusman_guc);
    printf("Ceviklik:%d\n",dusman_ceviklik);
    printf("Dayaniklilik:%d\n",dusman_dayaniklilik);
    printf("Can: %d\n", dusman_can);
    printf("1. Savas\n");
    printf("2. Kac\n");
    int secim;
    scanf("%d", &secim);
     if (secim == 2) {
        int kacma_sansi = (4 * *ceviklik) / 100;
        if (kacma_sansi> (1/5)) {
            printf("\nKacmayi basardiniz...\n");
            *uyku-=5;
            *tokluk-=5;
            return;
        }
         else {
            printf("\nKacamadiniz! Dusman sizi yakaliyor ve savasmak zorunda kaliyorsunuz!\n");
        }
    }
    daktilo("\nSavas basliyor!\n", 50000);

       int ozan_baslar;
    if (*ceviklik > dusman_ceviklik) {
        ozan_baslar = 1;
        printf("\n%s ilk saldiriyor.\n", ozanAdi);
    }
     else if (*ceviklik < dusman_ceviklik) {
        ozan_baslar = 0;
        printf("\naslan ilk saldiriyor.\n");
    }
     else {
        ozan_baslar = rand() % 2;
    }



    while (*can > 0 && dusman_can > 0) {
        if (ozan_baslar) {
            int hasar = 4 * (*guc);
            int verilen_hasar = hasar - (hasar * (4 * (dusman_dayaniklilik) /100) -1);
            dusman_can -= verilen_hasar;
            printf("\n%s aslana saldirdi ve %d hasar verdi! Aslanin kalan cani: %d\n", ozanAdi, verilen_hasar, dusman_can);
            ozan_baslar = 0;
        }
        else {
            int hasar = 4 * dusman_guc;
            int alinan_hasar= hasar - (hasar * (4 * (*dayaniklilik) /100) -1);
            *can -= alinan_hasar;
            printf("\naslan size saldirdi ve %d hasar verdi! Ozanin kalan cani: %d\n", alinan_hasar, *can);
            ozan_baslar = 1;
        }

        if (*can <= 0) {
            check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);
        }
         else if (dusman_can <= 0) {
            daktilo("\nAslan yenildi!\n", 50000);
            *uyku-=10;
            *tokluk-=10;
            *hijyen-=5;
            *para+=15;
            *seviye_puani+=20;
            daktilo("15 Altin kazandiniz!\n", 50000);
        }
    }
    check(can, uyku, tokluk, hijyen, karizma, ozanAdi, seviye_puani, seviye, guc, ceviklik, dayaniklilik, toplayicilik);

    daktilo("\nDurum raporu:\n", 50000);
    printf("Can: %d\n", *can);
    printf("Tokluk: %d\n", *tokluk);
    printf("Uyku: %d\n", *uyku);
    printf("Hijyen: %d\n", *hijyen);
    printf("Guc: %d\n", *guc);
    printf("Ceviklik: %d\n", *ceviklik);
    printf("Dayaniklilik: %d\n", *dayaniklilik);

}

int main() {
    char eminMi;

    int seviye_puani = 0;
    int seviye = 0;

    //beceriler
    int guc = 3;
    int ceviklik = 3;
    int dayaniklilik = 3;
    int toplayicilik = 3;
    int karizma = 3;

    //temel nitelikler
    int can = 70;
    int tokluk = 100;
    int hijyen = 20;
    int uyku = 100;
    int para = 10;
    float kazanilan_para;

    char ozanAdi[100];
    char calgiAdi[100];
    int secim;

    printf("Kahramanin adini girin: ");
    gets(ozanAdi);

    printf("Ozanin calgisini girin: ");
    gets(calgiAdi);
    /////////
    int hikayesecim;
    daktilo("\nHikayeyi atlamak ister misiniz?\n", 50000);
    printf("1-Hayir\n2-Atla.\n");
    scanf("%d", &hikayesecim);
    while(1){
    if(hikayesecim==1){
        hikaye(&ozanAdi);
        break;
    }
    else if(hikayesecim==2){
        break;
    }
    else{
        if (scanf("%d", &hikayesecim) != 1) {
            temizle(); // Giriş tamponunu temizler
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
        }
        else
            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
    }
    }

    /////////////

    while (1) {
        daktilo("\n--- KOY MEYDANI ---\n", 50000);
        printf("1. Kamp alanina git.\n");
        printf("2. Sifahaneye git.\n");
        printf("3. Hana git.\n");
        printf("4. Maceraya atil.\n");
        printf("5. Oyun hakkinda/tuyolar\n");
        printf("6. Durumu goster.\n");
        printf("7. Oyundan cik.\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1: //Nurseza Karakaya
                daktilo("Kamp alanina gidiyorsunuz...\n", 50000);
                 int kampSecim;
                while (1) {
                    printf("\n-- KAMP ALANI --\n");
                    printf("1. Kamp atesinin basinda calgi cal/sarki soyle.\n");
                    printf("2. Nehirde yikan.\n");
                    printf("3. Cadirina girip uyu.\n");
                    printf("4. Koy meydanina don.\n");
                    printf("Seciminizi yapin: ");
                    scanf("%d", &kampSecim);

                    if (kampSecim == 1) {
                        if(hijyen<=20){
                            daktilo("Fazla kirli oldugun icin seni kovdular... Karizman cizildi\n", 50000);
                            karizma-=3;
                        }
                        else{
                        daktilo("Kamp atesinin basinda ", 50000);
                        daktilo(calgiAdi, 50000);
                        daktilo(" caliyorsunuz...\n", 50000);
                        printf("Karizmaniz artti! \n");
                        karizma+=1;
                        seviye_puani+=10;
                        uyku-=5;
                        if(karizma>=25)
                            karizma=25;
                        kazanilan_para= 10 + karizma * hijyen /100;
                        printf("%.2f Altin kazandiniz! \n", kazanilan_para);
                        para += kazanilan_para;
                        }
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                    }
                     else if (kampSecim == 2) {
                        if(hijyen==100){
                            daktilo("Yeterince temizsin.\n", 50000);
                        }
                        else{
                        daktilo("Nehirde yikaniyorsunuz...\n", 50000);
                        printf("Hijyeniniz 50 artti! \n");
                        hijyen+=50;
                        seviye_puani+=10;
                        if(hijyen>=100)
                            hijyen=100;
                        }
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                    }
                     else if (kampSecim == 3) {
                        if(uyku==100)
                            daktilo("Henuz uykun yok.\n", 50000);
                        else{
                        daktilo("Cadiriniza girip uyuyorsunuz...\n", 50000);
                        uyku=100;
                        seviye_puani+=10;
                        }
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                    }
                    else if (kampSecim == 4) {
                        daktilo("Koy meydanina donuyorsunuz...\n", 50000);
                        break;
                    }
                    else {
                        if (scanf("%d", &kampSecim) != 1) {
                            temizle(); // Giriş tamponunu temizler
                            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                        }
                        else
                            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                    }
                }
                break;
            case 2: // İREM RANA PEKER
                if(can==100){
                    printf("Sagliginiz yeterince iyi! \n");
                }
                else{
                daktilo("Sifahaneye gidiyorsunuz...\n", 50000);
                }
                while(1){
                int sifahaneSecim;
                printf("\n-- SIFAHANE --\n");
                    printf("1. Sifacidan yaralarini sarmasini iste.(10 Altin)\n");
                    printf("2. Sifacidan merhem yapip surmesini iste.(20 Altin)\n");
                    printf("3. Koy meydanina don.\n");
                    printf("Seciminizi yapin: ");
                    scanf("%d", &sifahaneSecim);
                if(sifahaneSecim==1){
                        if(para<10)
                            printf("Tedavi olmaniz icin paraniz yetersiz.");
                        else{
                            daktilo("Sifaci yaralarinizi sariyor...\n", 50000);
                            can+=10;
                            seviye_puani+=10;
                            if(can>=100)
                            can=100;
                        }
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                }

                else if (sifahaneSecim==2){
                         if(para<20)
                            printf("Tedavi olmaniz icin paraniz yetersiz.");
                        else{
                            daktilo("Sifaci size merhem yapip suruyor...\n", 50000);
                            can+=20;
                            seviye_puani+=15;
                            if(can>=100)
                            can=100;
                        }
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                }
                else if (sifahaneSecim == 3) {
                        daktilo("Koy meydanina donuyorsunuz...\n", 50000);
                        break;
                    }
                     else {
                        if (scanf("%d", &sifahaneSecim) != 1) {
                            temizle(); // Giriş tamponunu temizler
                            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                        }
                        else
                            daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                    }
                }

                break;

            case 3:        //İREM RANA PEKER
                daktilo("\nHana gidiyorsunuz...\n", 50000);
                int yemekSecimi;
                printf("\n--- HAN- --\n");
                printf("1. Yiyecek satin al ve ye\n");
                printf("2. Icecek satin al, ic ve eglen\n");
                printf("3. Enstruman cal ve sarki soyle\n");
                printf("4. Koy meydanina don\n");
                printf("Seciminizi yapiniz: ");
                scanf("%d", &secim);

                switch (secim) {
                    case 1:
                    printf("\n1. Simit(10 Altin)\n");
                    printf("2. Portakal(5 altin)\n");
                    printf("3. Yahni(20 Altin)\n");
                    printf("4. Cay(5 altin)\n");
                    scanf("%d",&yemekSecimi);
                    if(yemekSecimi==1){
                        if(para<10){
                            daktilo("Paraniz yetersiz...\n", 50000);
                        }
                        else{
                        para-=10;
                        tokluk+=20;
                        seviye_puani+=10;
                        daktilo("Simit yiyorsunuz...\n", 50000);
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                        }
                    }
                    if(yemekSecimi==2){
                        if(para<5){
                            daktilo("Paraniz yetersiz...\n", 50000);
                        }
                        else{
                        para-=5;
                        tokluk+=10;
                        seviye_puani+=10;
                        daktilo("Portakal yiyorsunuz...\n", 50000);
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                        }
                    }
                    if(yemekSecimi==3){
                        if(para<20){
                            daktilo("Paraniz yetersiz...\n", 50000);
                        }
                    else{
                        para-=20;
                        tokluk+=50;
                        seviye_puani+=15;
                        daktilo("Yahni yiyorsunuz....\n", 50000);
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                        }
                    }
                    if(yemekSecimi==4){
                        if(para<5){
                            daktilo("Paraniz yetersiz...\n", 50000);
                        }
                        else{
                        para-=5;
                        tokluk+=5;
                        seviye_puani+=10;
                        daktilo("Cay iciyorsunuz...\n", 50000);
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                        }
                    }
                    break;

                    case 2:
                    daktilo("\nIcecek satin alip iciyor ve egleniyorsunuz...\n", 50000);
                    tokluk+=5;
                    uyku-=30;
                    karizma+=2;
                    seviye_puani+=10;
                    check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                    break;

                    case 3:
                    if(hijyen<=20){
                        daktilo("Fazla kirli oldugun icin seni handan kovdular... Karizman cizildi.\n", 50000);
                        karizma-=3;
                    }
                    else {
                        printf("Hanin ortasinda %s calip sarki soyluyorsunuz.\n", calgiAdi);
                        printf("Karizmaniz artti! \n");
                        karizma+=1;
                        uyku-=10;
                        seviye_puani+=15;
                        if(karizma>=25)
                        karizma=25;

                        kazanilan_para= 10 + karizma * hijyen /100;
                        printf("%.2f Altin kazandiniz! \n", kazanilan_para);
                        para += kazanilan_para;
                        check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                        }

                    break;
        case 4:
            printf("Koy meydanina donuyorsunuz.\n");
            break;
        default:
            if (scanf("%d", &secim) != 1) {
                    temizle(); // Giriş tamponunu temizler
                    daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                }
                else
                daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
    }
                break;
            case 4:
                daktilo("\nHangi maceraya atilmak istersiniz?\n", 50000);
                printf("1. Yakin cevrede sifali bitki topla ve avlan.\n");
                printf("2. Ormani kesfe cik (zor).\n");
                printf("3. Kayaliklari kesfe cik (orta).\n");
                printf("4. Vadiyi kesfe cik (kolay).\n");
                printf("5. Koy meydanina don.\n");
                printf("Seciminizi yapin: ");
                scanf("%d", &secim);

                switch (secim) {
                    case 1:
                    sifali_bitki_topla_ve_avlan(toplayicilik,&can,&tokluk,&seviye_puani);
                    hijyen-=20;
                    check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                    break;
                case 2:
                    ormani_kesfet(&uyku,&ceviklik,&can, &guc, &ozanAdi, &tokluk, &dayaniklilik, &hijyen, &karizma,&seviye_puani, &seviye, &para, &toplayicilik);
                    daktilo("\nGozlerinizi actiginizda kendinizi tekrar koyde buluyorsunuz.\n", 50000);
                    daktilo("Hemen dogrulup ayaga kalkmaya calisiyorsunuz. Ustunuz basiniz toprak olmus ve feci sekilde basiniz agriyor.\n", 50000);
                    hijyen-=20;
                    check(&can, &uyku, &tokluk, &hijyen, &karizma, &ozanAdi, &seviye_puani,&seviye, &guc, &ceviklik, &dayaniklilik, &toplayicilik);
                    break;
                case 3:
                    kayaliklari_kesfet(&uyku,&ceviklik,&can, &guc, &ozanAdi, &tokluk, &dayaniklilik, &hijyen, &karizma,&seviye_puani, &seviye, &para, &toplayicilik);
                    break;
                case 4:
                    vadiyi_kesfet(&uyku,&ceviklik,&can, &guc, &ozanAdi, &tokluk, &dayaniklilik, &hijyen, &karizma,&seviye_puani, &seviye, &para, &toplayicilik);
                    break;
                case 5:
                    daktilo("\nKoy meydanina geri donuyorsunuz...\n", 50000);
                    break;
                default:
                if (scanf("%d", &secim) != 1) {
                    temizle(); // Giriş tamponunu temizler
                    daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                }
                else
                daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                }
                break;

            case 5: // Nurseza Karakaya
                daktilo("\n*Nurseza KARAKAYA, Irem Rana PEKER*\n", 5000);
                daktilo("\n*Oyundaki temel amac, 11. seviyeye gelmektir.\n", 900);
                daktilo("11. seviyeye ulastiginizda oyun biter ve cikacak seceneklerle hikayenin sonunu siz belirlersiniz.\n", 900);
                daktilo("Oyunun dogru bir sonu yok. Tamamen oyuncunun tercihine gore bir son belirlenir, amac sadece eglenmek :)\n", 900);
                daktilo("\n*Dayaniklilik, guc, toplayicilik gibi becerileri seviye atlayarak artirabilirsiniz.\n", 900);
                daktilo("Farkli olarak Karizma'yi sadece sosyal etkilesimlerle degistirebilirsiniz. Seviye, karizmanizi artirmayacak.\n", 900);
                daktilo("\n*Orman macerasi icin full can, tokluk ve uyku ile gitmeniz onerilir.\n", 900);
                daktilo("\n*Maceralarda herhangi bir dusmanla savasmadan once kacmayi tercih ederseniz macera tamamen sonlanacaktir ve koye donersiniz.\n", 900);
                daktilo("Devam etmediginiz icin haliyle siradaki dusmanlarla karsilasmazsiniz ve macera yarim kalir.\n", 900);
                daktilo("\n*Maceralardaki dusman sayilari:\n", 900);
                daktilo("Vadi: 1\n", 900);
                daktilo("Kayaliklar: 2\n", 900);
                daktilo("Orman: 2 + 1 hikaye\n", 900);
                daktilo("\n*Oldugunuz takdirde oyuna en bastan baslamak zorunda kalirsiniz. O yuzden maceraya atilirken kararlarinizi iyi verin.\n", 900);
                daktilo("Aceleci davranip dusuk seviye ile zor maceralara atilmayin.!\n", 900);
                daktilo("*Ayni sekilde oyundan cikmak da butun ilerlemenizi silecektir. [Henuz kaydetme sistemi yapmayi bilmiyoruz :( ]\n", 900);
                daktilo("\n*Sanirim bu kadar. Iyi eglenceler! :P -Nurseza\n", 900);
                break;
            case 6:
                printf("\n--- Durum ---\n");
                printf("Ozanin Adi: %s\n", ozanAdi);
                printf("Calgisi: %s\n", calgiAdi);
                printf("Can: %d\n", can);
                printf("Tokluk: %d\n", tokluk);
                printf("Uyku: %d\n", uyku);
                printf("Hijyen: %d\n", hijyen);
                printf("\nToplayicilik:%d\n",toplayicilik);
                printf("Guc: %d\n", guc);
                printf("Ceviklik: %d\n", ceviklik);
                printf("Dayaniklilik: %d\n", dayaniklilik);
                printf("Karizma: %d ", karizma);
                if(karizma>=20)
                    printf("(Goz kamastiricisin! :] )");
                else if(karizma<=5)
                    printf("(Toplum seni sevmiyor. :[ )");
                printf("\nPara: %d ", para);
                if(para>=90)
                    printf("(Wow para saciyorsun!)\n");
                else if(para<=10)
                    printf("(Bes parasizsin...) \n");

                printf("\nSeviye: %d \n", seviye);
                break;
            case 7:
                printf("Oyundan cikmak istediginize emin misiniz? (E/H): ");
                scanf(" %c", &eminMi);
                if (eminMi == 'E' || eminMi == 'e') {
                    daktilo("Oyundan cikiliyor...\n", 50000);
                    return 0;
                }
                else if(eminMi == 'H' || eminMi == 'h')
                    daktilo("Ana menuye donuluyor...\n", 50000);
                break;
            default:
                if (scanf("%d", &kampSecim) != 1) {
                    temizle(); // Giriş tamponunu temizler
                    daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                }
                else
                daktilo("Gecersiz bir secim yaptiniz. Tekrar deneyin.\n", 50000);
                break;
        }
    }

    return 0;
}
