# Polybius Encrypter and Decrypter

###### Polybius şifreleme yöntemi Yunanlı Polybius tarafından geliştirilmiştir. Yerine koyma (Substitution) şifreleme yöntemidir. Bu yöntemde alfabedeki harfler, iki boyutlu bir tabloya yerleştirilerek satır ve sütun numaralarına göre şifreli bilgi oluşturmaktadır.

* Sadece küçük harfler için çalışır.
* Şifreli bilgiyi oluşturmak için 1000 karakter ile sınırlıdır.(İstenirse değiştirilebilir)
* İngiliz alfabesine göre yazılmıştır.
* Her harfin yerine gelen şifreli bilgi iki rakamdan oluşur.(Sırasıyla Satır-Sütun şeklinde) 
* Şifreli mesajın çözülmesi için tablo bilinmelidir.
* İşletim sistemlerine göre değişebilecek kodlar kullanılmamıştır.
* MinGW 6.3.0 G++ derleyicisi ile test edilmiştir.

###### NOT : Kod üzerinde değişikler yapılarak istenilen şekilde çalışması sağlanabilir. 