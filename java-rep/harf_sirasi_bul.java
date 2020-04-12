/**
 * created by cicek on 20.04.2018 13:02
 */

import java.util.Scanner;

public class harf_sirasi_bul {
    public static void main(String[] args){

        String word;
        Scanner oku = new Scanner(System.in); // Scanner sınıfınına erişimi ve "oku" nesnesi(objesi) oluşturulması

        System.out.print("\nTürkçe karakter içeren\nbir kelime veya harf grubu giriniz: \n");
        word = oku.nextLine(); // kullanıcıdan okunan kelime, "word" değişkeninde tutuldu

        // burada alfabetik sıra char olarak bir diziye atandı
        char[] kelimeDizisi = {'a', 'b', 'c', 'ç', 'd', 'e', 'f', 'g', 'ğ', 'h', 'ı', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'ö', 'p', 'r', 's', 'ş', 't', 'u', 'ü', 'v', 'y', 'z'};

        for (int i=0; i<word.length(); i++){ // kullanıcının girdiği kelimenin uzunluğu kadar bir for döngüsü belirlendi

            char ara;
            /*
                buradaki charAt() fonksiyonu String olarak tutulan kelimenin harflerini teker teker okumamızı sağlar.
                word.charAt(0) --> 0 olan yer indisi gösterir.
             */
            ara = word.charAt(i); // i, word kelimesinin i. indisini gösterecek ve bunu kolay olsun diye ara'ya atıyoruz.

            for (int j=0; j<kelimeDizisi.length; j++){ // buradaki for ise alfabetik sırayı tuttuğumuz dizinin içinde gezinebilmek içindir.

                if (ara == kelimeDizisi[j]){ // ara, yani girilen kelimenin i. indisindeki harfi kelimeDizisi'nin j. indisindeki harf ile aynı mı?

                    System.out.println(j+1); // aynı ise indisler 0 dan başladığı için 1 ekleyerek bunu ekrana yazdırıyoruz. böylece harfin karşılığı olan sayı yazdırılabilir
                    break; // break diyip, if'in bulunduğu for döngüsünden çıkıyoruz.
                }

            }// for

        }// for


    } //main

} // class