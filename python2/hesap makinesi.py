sayı1=int(input("sayı giriniz: "))
sayı2=int(input("sayı giriniz: "))
print(sayı1)
print(sayı2)
x=str(input ("Yapmak istediğiniz işlemi yazınız: "))

if x == "toplam":
    print(sayı1+sayı2)
elif x == "çıkarma":
    print(sayı1-sayı2)
elif x == "çarpma":
    print(sayı1*sayı2)
elif x==  "bölme":
    print(sayı1/sayı2)
else:
    print("Geçersiz işlem ")