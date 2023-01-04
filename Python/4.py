sinav_sonuc = {'isimler':['Ayse K.','Ahmet M.','Nuri C.','Nawar T.','Suzan T.','Ala B.'],'cinsiyet':['K','E','E','E','K','K'],'vize':[60,40,97,45,56,95],'final':[70,30,23,80,78,46],'durum':[]}
def ogrenci_ekleme(isim, cinsiyet, vize, final, durumu):
    sinav_sonuc["isimler"].append(isim)
    sinav_sonuc['cinsiyet'].append(cinsiyet)
    sinav_sonuc['vize'].append(vize)
    sinav_sonuc['final'].append(final)
for i in range(2):
    isim = input("isim giriniz : ")
    cinsiyet = input("cinsiyet giriniz : ")
    vize = int(input("vize notunu giriniz : "))
    final = int(input("final notunu giriniz : "))
    ogrenci_ekleme(isim, cinsiyet, vize, final, durumu='')
for i in range(len(sinav_sonuc['isimler'])):
    if (sinav_sonuc['vize'][i]*0.3)+(sinav_sonuc['final'][i]*0.7) < 60:
       sinav_sonuc['durum'].append('kaldi')  
    else:
        sinav_sonuc['durum'].append('gecti')
print(sinav_sonuc)